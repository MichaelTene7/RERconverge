#include <RcppArmadillo.h>
#include <math.h>
using namespace Rcpp;
using namespace arma;

//[[Rcpp::depends(RcppArmadillo)]]
// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
NumericVector timesTwo(NumericVector x) {
  return x * 2;
}

// [[Rcpp::export]]
List missingSampler() {
  return(List::create(NumericVector::create(NA_REAL), 
                      IntegerVector::create(NA_INTEGER),
                      LogicalVector::create(NA_LOGICAL), 
                      CharacterVector::create(NA_STRING)));
}

// [[Rcpp::export]]
// LogicalVector isNA(NumericVector x) {
//   int n = x.size();
//   LogicalVector out(n);
//   
//   for (int i = 0; i < n; ++i) {
//     out[i] = NumericVector::is_na(x[i]);
//   }
//   return out;
// }

LogicalVector isNA(NumericVector x) {
  int n = x.size();
  LogicalVector out(n);
  
  for (int i = 0; i < n; ++i) {
    out[i] = NumericVector::is_na(x[i]);
  }
  return out;
}


// [[Rcpp::export]]
uvec isNotNArowvec(const rowvec x) {
  
  int n = x.size();
  vec out(n);
  
  for (int i = 0; i < n; ++i) {
    out[i] = NumericVector::is_na(x[i]);
  }
  uvec ids = find(out==0);
  //  return x.elem(ids);
  return(ids);
}



// [[Rcpp::export]]
mat fastLmResid(const mat& Y, const mat& X){
  
  int n = X.n_rows, k = X.n_cols;
  mat res;
  
  mat coef = Y*X*inv(trans(X)*X);    // fit model y ~ X
  res  = Y - coef*trans(X);           // residuals
  
  return res;
}

// [[Rcpp::export]]
mat fastLmPredicted(const mat& Y, const mat& X){
  
  int n = X.n_rows, k = X.n_cols;
  mat res;
  
  mat coef = Y*X*inv(trans(X)*X);    // fit model y ~ X
  return coef*trans(X);           // residuals
  
  
}


// [[Rcpp::export]]
mat fastLmResidWeighted(const mat& Y, const mat& X,  const rowvec& wa){
  
  int n = X.n_rows, k = X.n_cols;
  mat res;
  
  rowvec ws=rowvec(wa.n_elem);
  for (int j=0; j<ws.n_elem; j++){
    ws[j]=std::sqrt(wa[j]);
  }
  mat W=diagmat(wa);
  
  // coeff=dat%*%W%*%modtmp %*% solve(t(modtmp) %*% W %*% modtmp)
  mat coef = Y*W*X*inv(trans(X)*W*X);    // fit model y ~ X
  res  = Y - coef*trans(X);           // residuals
  res.each_row()%=ws;
  
  return res;
}  




// [[Rcpp::export]]
List fastLm(const mat& Y, const mat& X) {
  int n = X.n_rows, k = X.n_cols;
  
  //  coeff=data[i,]%*%mod %*% solve(t(mod) %*% mod)
  //    resid[i, ] = data[i,] -(coeff %*% t(mod))\
  
  
  mat coef = Y*X*inv(trans(X)*X);    // fit model y ~ X
  mat res  = Y - coef*trans(X);           // residuals
  
  // std.errors of coefficients
  double s2 = std::inner_product(res.begin(), res.end(), res.begin(), 0.0)/(n - k);
  
  // colvec std_err = sqrt(s2 * diagvec(pinv(trans(X)*X)));
  
  return List::create(Named("coefficients") = coef,
                      //                   Named("stderr")       = std_err,
                      Named("df.residual")  = n - k);
}

// [[Rcpp::export]]
mat fastLmResidMat(const mat& Y, const mat& X) {
  uvec ids;
  mat rmat=mat(Y.n_rows, Y.n_cols);
  rmat.fill(datum::nan);
  uvec vec_i=uvec(1);
  int i,j;
  for (int i=0; i<Y.n_rows; i++){
    vec_i[0]=i;
    ids=isNotNArowvec(Y.row(i));
    if(ids.n_elem>X.n_cols){
      rmat.submat(vec_i, ids)=fastLmResid(Y.submat(vec_i, ids), X.rows(ids));
    }
  }
  return(rmat);
}


// [[Rcpp::export]]
mat fastLmPredictedMat(const mat& Y, const mat& X) {
  uvec ids;
  mat rmat=mat(Y.n_rows, Y.n_cols);
  rmat.fill(datum::nan);
  uvec vec_i=uvec(1);
  int i,j;
  for (int i=0; i<Y.n_rows; i++){
    vec_i[0]=i;
    ids=isNotNArowvec(Y.row(i));
    if(ids.n_elem>X.n_cols){
      rmat.submat(vec_i, ids)=fastLmPredicted(Y.submat(vec_i, ids), X.rows(ids));
    }
  }
  return(rmat);
}


// [[Rcpp::export]]
mat fastLmResidMatWeighted(const mat& Y, const mat& X, const mat& W) {
  uvec ids;
  mat rmat=mat(Y.n_rows, Y.n_cols);
  rmat.fill(datum::nan);
  uvec vec_i=uvec(1);
  int i,j;
  for (int i=0; i<Y.n_rows; i++){
    vec_i[0]=i;
    ids=isNotNArowvec(Y.row(i));
    if(ids.n_elem>X.n_cols){
      rmat.submat(vec_i, ids)=fastLmResidWeighted(Y.submat(vec_i, ids), X.rows(ids), W.submat(vec_i, ids));
    }
  }
  return(rmat);
}



// [[Rcpp::export]]
mat fastLmResidMatWeightedNoNACheck(const mat& Y, const mat& X, const mat& W) {
  uvec ids;
  mat rmat=mat(Y.n_rows, Y.n_cols);
  
  uvec vec_i=uvec(1);
  int i,j;
  int nc=rmat.n_cols-1;
  for (int i=0; i<Y.n_rows; i++){
    rmat.submat(span(i,i),span(0, nc))=fastLmResidWeighted(Y.submat(span(i,i),span(0, nc)), X, W.submat(span(i,i),span(0, nc)));
  }
  return(rmat);
}


/*** R
set.seed(123)
x=rnorm(10)
y=rbind(rnorm(10))
w=rbind(rnorm(10)^2)
y[1,1]=NA
mod=model.matrix(~1+x)
message("Regular residual")
naresid(y, mod)
message("Regular residual CPP")
naresidCPP(y,mod)
message("Weighted residual")
naresid(data = y, mod, weights = w)
message("Weighted residual CPP")
naresidCPP(data = y, mod = mod, weights = w)
*/
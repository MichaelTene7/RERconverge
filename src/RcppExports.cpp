// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// timesTwo
NumericVector timesTwo(NumericVector x);
RcppExport SEXP _RERconverge_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}
// missingSampler
List missingSampler();
RcppExport SEXP _RERconverge_missingSampler() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(missingSampler());
    return rcpp_result_gen;
END_RCPP
}
// isNA
LogicalVector isNA(NumericVector x);
RcppExport SEXP _RERconverge_isNA(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(isNA(x));
    return rcpp_result_gen;
END_RCPP
}
// isNotNArowvec
arma::uvec isNotNArowvec(const arma::rowvec x);
RcppExport SEXP _RERconverge_isNotNArowvec(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(isNotNArowvec(x));
    return rcpp_result_gen;
END_RCPP
}
// fastLmResid
arma::mat fastLmResid(const arma::mat& Y, const arma::mat& X);
RcppExport SEXP _RERconverge_fastLmResid(SEXP YSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmResid(Y, X));
    return rcpp_result_gen;
END_RCPP
}
// fastLmPredicted
arma::mat fastLmPredicted(const arma::mat& Y, const arma::mat& X);
RcppExport SEXP _RERconverge_fastLmPredicted(SEXP YSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmPredicted(Y, X));
    return rcpp_result_gen;
END_RCPP
}
// fastLmResidWeighted
arma::mat fastLmResidWeighted(const arma::mat& Y, const arma::mat& X, const arma::rowvec& wa);
RcppExport SEXP _RERconverge_fastLmResidWeighted(SEXP YSEXP, SEXP XSEXP, SEXP waSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type wa(waSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmResidWeighted(Y, X, wa));
    return rcpp_result_gen;
END_RCPP
}
// fastLm
List fastLm(const arma::mat& Y, const arma::mat& X);
RcppExport SEXP _RERconverge_fastLm(SEXP YSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLm(Y, X));
    return rcpp_result_gen;
END_RCPP
}
// fastLmResidMat
arma::mat fastLmResidMat(const arma::mat& Y, const arma::mat& X);
RcppExport SEXP _RERconverge_fastLmResidMat(SEXP YSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmResidMat(Y, X));
    return rcpp_result_gen;
END_RCPP
}
// fastLmPredictedMat
arma::mat fastLmPredictedMat(const arma::mat& Y, const arma::mat& X);
RcppExport SEXP _RERconverge_fastLmPredictedMat(SEXP YSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmPredictedMat(Y, X));
    return rcpp_result_gen;
END_RCPP
}
// fastLmResidMatWeighted
arma::mat fastLmResidMatWeighted(const arma::mat& Y, const arma::mat& X, const arma::mat& W);
RcppExport SEXP _RERconverge_fastLmResidMatWeighted(SEXP YSEXP, SEXP XSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmResidMatWeighted(Y, X, W));
    return rcpp_result_gen;
END_RCPP
}
// fastLmResidMatWeightedNoNACheck
arma::mat fastLmResidMatWeightedNoNACheck(const arma::mat& Y, const arma::mat& X, const arma::mat& W);
RcppExport SEXP _RERconverge_fastLmResidMatWeightedNoNACheck(SEXP YSEXP, SEXP XSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmResidMatWeightedNoNACheck(Y, X, W));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RERconverge_timesTwo", (DL_FUNC) &_RERconverge_timesTwo, 1},
    {"_RERconverge_missingSampler", (DL_FUNC) &_RERconverge_missingSampler, 0},
    {"_RERconverge_isNA", (DL_FUNC) &_RERconverge_isNA, 1},
    {"_RERconverge_isNotNArowvec", (DL_FUNC) &_RERconverge_isNotNArowvec, 1},
    {"_RERconverge_fastLmResid", (DL_FUNC) &_RERconverge_fastLmResid, 2},
    {"_RERconverge_fastLmPredicted", (DL_FUNC) &_RERconverge_fastLmPredicted, 2},
    {"_RERconverge_fastLmResidWeighted", (DL_FUNC) &_RERconverge_fastLmResidWeighted, 3},
    {"_RERconverge_fastLm", (DL_FUNC) &_RERconverge_fastLm, 2},
    {"_RERconverge_fastLmResidMat", (DL_FUNC) &_RERconverge_fastLmResidMat, 2},
    {"_RERconverge_fastLmPredictedMat", (DL_FUNC) &_RERconverge_fastLmPredictedMat, 2},
    {"_RERconverge_fastLmResidMatWeighted", (DL_FUNC) &_RERconverge_fastLmResidMatWeighted, 3},
    {"_RERconverge_fastLmResidMatWeightedNoNACheck", (DL_FUNC) &_RERconverge_fastLmResidMatWeightedNoNACheck, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_RERconverge(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

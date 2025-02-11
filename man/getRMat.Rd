% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RERfuncs.R
\name{getRMat}
\alias{getRMat}
\title{Extract a maximal independent residual matrix for each feature Matrix}
\usage{
getRMat(resOut, all = F, weights = NULL, use.rows = NULL, norm = "scale")
}
\arguments{
\item{resOut}{An object resulting from the NEW \code{\link{getAllResiduals2}} (NOT the original \code{\link{getAllResiduals}})}

\item{all}{Logical, indicating whether to return all of the residuals instead of the independent set(default is FALSE).}

\item{weights}{A matrix of weights used to normalize the path values computed by \code{\link{transformPaths}} (default is NULL).}

\item{use.rows}{A vector of indices of rows/features to return (default is NULL, which means all rows).}

\item{norm}{A character string specifying the normalization method. Options include "scale," "zscore," or "quantile" (default is "scale").}
}
\value{
An residual matrix equivalent to that produced by the original \code{\link{getAllResiduals}}
assuming all=FALSE
}
\description{
Extract a maximal independent residual matrix for each feature Matrix
}

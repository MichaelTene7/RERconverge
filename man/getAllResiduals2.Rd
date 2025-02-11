% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RERfuncs.R
\name{getAllResiduals2}
\alias{getAllResiduals2}
\title{Get All Residuals}
\usage{
getAllResiduals2(
  treesObj,
  nvMod = NULL,
  n.pcs = 0,
  cutoff = NULL,
  useSpecies = NULL,
  min.sp = 10,
  min.valid = 20,
  doOnly = NULL,
  maxT = NULL,
  block.do = F,
  weights = NULL,
  use.weights = T,
  interaction = F
)
}
\arguments{
\item{treesObj}{A trees object from readTrees or readTrees2}

\item{nvMod}{A normalization model with nrow(treesObj$paths) rows and any number of columns (optional).}

\item{n.pcs}{Number of principal components to normalize by (default: 0, mean normalization).}

\item{cutoff}{A cutoff for branches to be ignored (optional, lowest 5% by default).}

\item{useSpecies}{Species subset to use (optional).}

\item{min.sp}{Minimum species in a tree.  (default: 10).}

\item{min.valid}{Minimum number of non NA values (after filtering) that must be present for regression to be computed (default: 20).}

\item{doOnly}{Only do specific trees (optional).}

\item{maxT}{Maximum number of trees to do (optional, mostly useful for debugging).}

\item{block.do}{Process rows in blocks (default: FALSE).}

\item{weights}{Weights for calculations (optional, if treesObj has weights those are used).}

\item{use.weights}{Can be use to turn of weighted regression.}

\item{interaction}{Use PC interactions when building the normalization model (default: FALSE).}
}
\value{
A list containing calculated residuals
}
\description{
Calculate residuals for a given trees object using a set of normalization covariates
}

// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_bmpop
SEXP cpp_bmpop(NumericMatrix data, NumericMatrix sig, NumericMatrix rytpar, double alpha, int k, double perd);
RcppExport SEXP CATkit_cpp_bmpop(SEXP dataSEXP, SEXP sigSEXP, SEXP rytparSEXP, SEXP alphaSEXP, SEXP kSEXP, SEXP perdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sig(sigSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type rytpar(rytparSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type perd(perdSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_bmpop(data, sig, rytpar, alpha, k, perd));
    return rcpp_result_gen;
END_RCPP
}
// cpp_test
SEXP cpp_test(NumericMatrix X);
RcppExport SEXP CATkit_cpp_test(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_test(X));
    return rcpp_result_gen;
END_RCPP
}

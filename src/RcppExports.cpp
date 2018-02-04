// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// count_possible_edges_
int count_possible_edges_(List& cascade_nodes, List& cascade_times);
RcppExport SEXP _NetworkInference_count_possible_edges_(SEXP cascade_nodesSEXP, SEXP cascade_timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type cascade_nodes(cascade_nodesSEXP);
    Rcpp::traits::input_parameter< List& >::type cascade_times(cascade_timesSEXP);
    rcpp_result_gen = Rcpp::wrap(count_possible_edges_(cascade_nodes, cascade_times));
    return rcpp_result_gen;
END_RCPP
}
// netinf_
List netinf_(IntegerVector& node_ids, List& cascade_nodes, List& cascade_times, int& n_edges, int& model, double& lambda, bool quiet, bool auto_edges, double cutoff);
RcppExport SEXP _NetworkInference_netinf_(SEXP node_idsSEXP, SEXP cascade_nodesSEXP, SEXP cascade_timesSEXP, SEXP n_edgesSEXP, SEXP modelSEXP, SEXP lambdaSEXP, SEXP quietSEXP, SEXP auto_edgesSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type node_ids(node_idsSEXP);
    Rcpp::traits::input_parameter< List& >::type cascade_nodes(cascade_nodesSEXP);
    Rcpp::traits::input_parameter< List& >::type cascade_times(cascade_timesSEXP);
    Rcpp::traits::input_parameter< int& >::type n_edges(n_edgesSEXP);
    Rcpp::traits::input_parameter< int& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< bool >::type auto_edges(auto_edgesSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(netinf_(node_ids, cascade_nodes, cascade_times, n_edges, model, lambda, quiet, auto_edges, cutoff));
    return rcpp_result_gen;
END_RCPP
}

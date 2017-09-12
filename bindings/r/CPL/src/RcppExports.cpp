// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpl_attach_r
void cpl_attach_r();
RcppExport SEXP CPL_cpl_attach_r() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    cpl_attach_r();
    return R_NilValue;
END_RCPP
}
// import_document_json_r
unsigned long long import_document_json_r(const std::string& filepath, const std::string& bundle_name);
RcppExport SEXP CPL_import_document_json_r(SEXP filepathSEXP, SEXP bundle_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type filepath(filepathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type bundle_name(bundle_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(import_document_json_r(filepath, bundle_name));
    return rcpp_result_gen;
END_RCPP
}
// export_bundle_json_r
void export_bundle_json_r(const unsigned long long bundle, const std::string& filepath);
RcppExport SEXP CPL_export_bundle_json_r(SEXP bundleSEXP, SEXP filepathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const unsigned long long >::type bundle(bundleSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type filepath(filepathSEXP);
    export_bundle_json_r(bundle, filepath);
    return R_NilValue;
END_RCPP
}
// cpl_detach_r
void cpl_detach_r();
RcppExport SEXP CPL_cpl_detach_r() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    cpl_detach_r();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"CPL_cpl_attach_r", (DL_FUNC) &CPL_cpl_attach_r, 0},
    {"CPL_import_document_json_r", (DL_FUNC) &CPL_import_document_json_r, 2},
    {"CPL_export_bundle_json_r", (DL_FUNC) &CPL_export_bundle_json_r, 2},
    {"CPL_cpl_detach_r", (DL_FUNC) &CPL_cpl_detach_r, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_CPL(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

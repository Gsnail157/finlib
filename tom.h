#ifndef TVM_H
#define TVM_H

// Present value
double pv(double fv, double r, double t);

//Future Value
double fv(double pv, double r, double t);

// Net Present Value
double npv(double *fv, double r, double t);

// Present Value of an Annuity
double pvoa(double c, double r, double t);

// Prints information about a mortgage
double mortgage_print(double loan, double rate, int term);

// Geometric Mean
double mean_geo(double years, double *arr);

// Arithmetic Mean
double mean_arith(int years, double *arr);

// Expected Return
double return_expected(double *p, double *r, int size);

// Historical Variance
double variance_hist(double *arr, int years);

// Standard Deviation Historical
double stddev_hist(double *arr, int years);

// Variance Expected
double variance_exp(double *p, double *r, int years);

// Standard Deviation Expected
double stddev_exp(double *p, double *r, int years);

// Beta Portfolio
double beta_port(double *weights_of_stock, double *beta, int num);

// Capital Asset Pricing Model
double capm(double risk_free, double market_return, double beta);

#endif


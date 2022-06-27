#ifndef TVM_H
#define TVM_H

double pv(double fv, double r, double t);
double fv(double pv, double r, double t);
double npv(double *fv, double r, double t);
double pvoa(double c, double r, double t);
double mortgage_print(double loan, double rate, int term);
double mean_geo(double years, double *arr);
double mean_arith(int years, double *arr);
double return_expected(double *p, double *r, int size);
double variance_hist(double *arr, int years);
double stddev_hist(double *arr, int years);
double variance_exp(double *p, double *r, int years);
double stddev_exp(double *p, double *r, int years);
double beta_port(double *weights_of_stock, double *beta, int num);
double capm(double risk_free, double market_return, double beta);

#endif


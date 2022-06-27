//Time Value of Money
//
#include <math.h>
#include <stdio.h>
#include <stdio.h>

double pv(double fv, double r, double t){
	return (fv / pow( (1 + r), t));	
}

double fv(double pv, double r, double t){
	return (pv * pow( (1 + r), t));
}

void mortage_print(double loan, double rate, int term){
	return;
}

double mean_geo(double years, double *arr){
	double sum = 1;
	for (int i = 0; i < years; i++){
		sum *= (1 + arr[i]);
	}
	return ((pow(sum, 1 / years)) - 1);
}

double mean_arith(int years, double *arr){
	double sum = 0;	
	for (int i = 0; i < years; i++){
		sum += arr[i];
	}
	return sum / years;
}

double return_expected(double *p, double *r, int size){
	double sum = 0;
	for (int i; i < size; i++){
		sum += (p[i] * r[i]);
	}
	return sum;
}

double variance_hist(double *arr, int years){
	double sum = 0;
	for (int i; i < years; i++){
		sum += pow((arr[i] - mean_arith(years, arr)), 2);
	}
	return sum / (years - 1);
}

double stddev_hist(double *arr, int years){
	return sqrt( variance_hist( arr, years));
}

double variance_exp(double *p, double *r, int years){
	double sum = 0;
	for (int i; i < years; i++){
		sum += (p[i] * pow(( r[i] - mean_arith( years, r)), 2));
	}
	return sum;
}

double stddev_exp(double *p, double *r, int years){
	return sqrt( variance_exp(p,r,years));
}

double beta_port(double *weights_of_stock, double *beta, int num){
	double sum = 0;
	for (int i; i < num; i++){
		sum += (weights_of_stock[i] * beta[i]);
	}
	return sum;
}

double capm(double risk_free, double market_return, double beta){
	return (risk_free + (beta * (market_return - risk_free)));
}




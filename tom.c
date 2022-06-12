//Time Value of Money
//
#include <math.c>

double pv(double fv, double r, double t){
	return (fv / pow( (1 + r), t));	
}
double fv(double pv, double r, double t){
	return (pv * pow( (1 + r), t));
{

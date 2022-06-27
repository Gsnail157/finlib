#include <stdlib.h>
#include <stdio.h>

#include "tom.h"

int main(){
	double sum;	
	double num[5] = {5,3,3,6,5};
	double dec[5] = {0.12, 0.14, 0.346, 0.06, 0.45};	
	sum = mean_geo(5, dec);
//	sum = mean_arith(5,num);	
	printf("result: %lf", sum);

	return 0;
}

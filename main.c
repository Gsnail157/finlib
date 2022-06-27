#include <stdlib.h>
#include <stdio.h>

#include "tom.h"

int main(){
	double sum;	
	double num[5] = {5,3,3,6,5};
//	sum = mean_geo(5, num);
	sum = mean_arith(5,num);	
	printf("result: %ld", sum);

	return 0;
}

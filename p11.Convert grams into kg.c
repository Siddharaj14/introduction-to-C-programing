//11.Convert grams into kg.
#include <stdio.h>

int main() {
	float g,k;

	printf("Please enter weight in grams:");
	scanf("%f", &g);

	 k = g /1000;

	printf("%f Kg", k);
	
	return 0;
}
/*
output

Please enter weight in grams:5000
5.000000 Kg
*/
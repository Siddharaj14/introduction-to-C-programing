//12.Convert kgs into grams.
#include <stdio.h>

int main() {
	float g,k;

	printf("Please enter weight in kilograms:");
	scanf("%f", &k);

	 g = k *1000;

	printf("%f Grams", g);
	
	return 0;
}
	/*
output

Please enter weight in kilograms:5
5000.000000 Grams
*/
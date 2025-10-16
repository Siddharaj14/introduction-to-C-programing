//Convert dollars into Rs. Where 1 $ = 48 Rs.
#include <stdio.h>

int main() {
	float d,r;

	printf("Please enter dollars:");
	scanf("%f", &d);

	 r = d * 48;

	printf("%f Rupees", r);
	
	return 0;
	
}/*

Output
Please enter dollars:10
480.000000 Rupees */
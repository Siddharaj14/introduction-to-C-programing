//10.Convert dollars into pound where 1 $ = 48 Rs. And 1 pound = 70 Rs.
#include <stdio.h>

int main() {
	float d,p;

	printf("Please enter dollars:");
	scanf("%f", &d);

	 p = d *1.458;

	printf("%f Pound", p);
	
	return 0;
}
	/*
Output
Please enter dollars:66
96.227997 Pound */

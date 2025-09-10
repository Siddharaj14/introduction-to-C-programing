//9. Convert Rs. into dollars where 1 $ = 48 Rs.
#include <stdio.h>

int main() {
	float d,r;

	printf("Please enter rupee:");
	scanf("%f", &r);

	 d = r / 48;

	printf("%f Dollar", d);
	
	return 0;
	
}
/*
output

Please enter rupee:50
1.041667 Dollar
*/
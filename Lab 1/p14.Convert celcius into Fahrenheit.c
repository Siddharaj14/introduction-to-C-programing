//14.Convert celcius into Fahrenheit. F = (9/5 * C) + 32
#include <stdio.h>

int main() {
 float c, f;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);

    f = (c* 9 / 5) + 32;

    
    printf("Temperature in Fahrenheit: %.2f\n", f);
	 

	
	return 0;
}
/*
output

Enter the temperature in Celsius: 50
Temperature in Fahrenheit: 122.00

*/
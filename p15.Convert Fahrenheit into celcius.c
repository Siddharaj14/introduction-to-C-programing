15.Convert Fahrenheit into celcius. C = 5/9 * (F – 32)
#include <stdio.h>

int main() {
    float f, c;

   
    printf("Enter temperature in Fahrenheit: ");

    scanf("%f", &f);

  
    c = (f - 32) * 5 / 9;

    
    printf("Temperature in Celsius: %.2f\n", c);

    return 0; // Indicate successful program execution
}
/*
output

Enter temperature in Fahrenheit: 50
Temperature in Celsius: 10.00
*/
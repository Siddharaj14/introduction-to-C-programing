//swapping two values
#include<stdio.h>
int main() {
  double a1, a2, temp;
  printf("Enter first number: ");
  scanf("%lf", &a1);
  printf("Enter second number: ");
  scanf("%lf", &a2);

  temp = a1;
  a1 = a2;
  a2 = temp;


  printf("\nAfter swapping, first number = %.2lf\n", a1);
  printf("After swapping, second number = %.2lf", a2);
  return 0;
}
/*
output

Enter first number: 5
Enter second number: 1

After swapping, first number = 1.00
After swapping, second number = 5.00
*/
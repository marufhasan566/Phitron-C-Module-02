#include<stdio.h>
 int main()
 {
    int a = 10, b=20, c=15;
    int sum = a+b;
    int subtraction = b-a;
    int multiplication = a*b;
    float division = b*1.0/c;
    int modulus = b%c;
    printf("Sum = %d\n",sum);
    printf("Subtraction = %d\n",subtraction);
    printf("Multiplication = %d\n",multiplication);
    printf("Division = %.3f\n",division);
    printf("Modulus = %d\n",modulus);
    return 0;

 }
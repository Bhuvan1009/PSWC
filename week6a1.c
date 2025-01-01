// finding the factorial of number without using recusion
#include <stdio.h>

int factorial(int n);

int main() 
{
    int num, fact;

    printf("Enter the  number ");
    scanf("%d", &num);

    fact = factorial(num);
    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}

int factorial(int n) 
{
    int i, fact = 1;

    for (i = 1; i <= n; i++) 
    {
        fact *= i;
    }

    return fact;
}


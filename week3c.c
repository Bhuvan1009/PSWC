// to check whether the given number is prime or not
#include<stdio.h>
void main()
{
    int n,i=2,c=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        printf("The given number is prime");
    }
    else
    {
        printf("the given number is not prime");
    }
}

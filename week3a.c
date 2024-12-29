//sum of individual digits of a positive integer
#include<stdio.h>
void main()
{
    int n,r,sum=0;
    printf("enter the values of n\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum=%d",sum);
}

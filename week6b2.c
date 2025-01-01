// C program to calculate GCD using recursion
#include<stdio.h>
int GCD(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else
    {
        return GCD(b,a%b);
    }
}
void main()
{
    int a,b,k;
    printf("enter a,b values|n");
    scanf("%d%d",&a,&b);
    k=GCD(a,b);
    printf("GCD=%d",k);
}

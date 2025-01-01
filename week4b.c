/*To find sum of two numbers using functions with
arguments and without return value*/
#include<stdio.h>
void sum(int x,int y);
void main()
{
    int a,b;
    sum(a,b);
}
void sum(int x,int y)
{
    int a,b,c;
    printf("Enter the values of a,b\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
}

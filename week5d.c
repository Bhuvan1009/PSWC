/*To find product of two numbers using functions with
arguments,with return value*/
#include<stdio.h>
int prod(int x,int y);
void main()
{
    int d,a,b;
    d=prod(a,b);
    printf("product is %d",d);
}
int prod(int x,int y)
{
    int a,b,c,d;
    printf("Enter the values of a,b\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    return c;
}

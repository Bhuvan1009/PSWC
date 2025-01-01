// C program to swap two numbers using Call by Reference
#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a,b;
    printf("enter the value of a & b:\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping:\n");
    printf("a = %d,b = %d",a,b);
    swap(&a,&b);
    printf("After swapping:\n");
    printf("a = %d,b = %d",a,b);
    return 0;
}
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

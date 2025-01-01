//C program to swap two numbers using call by value
#include<stdio.h>
void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("After swapping 1st number %d and 2nd number is %d",a,b);
}
int main(void)
{
    int first,second;
    scanf("%d%d",&first,&second);
    swap(first,second);
    printf("\n After swap function called 1st number is %d and 2nd number is %d",first,second);
    return 0;
}

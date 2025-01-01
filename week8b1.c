//c program to perform addition of two complex numbers
#include<stdio.h>
#include<stdlib.h>
    struct complex{
    int a,b;
}c1,c2,c3;
void main()
{
printf("enter first complex number:\n");
scanf("%d %d",&c1.a,&c1.b);
printf("enter second complex number:\n");
scanf("%d %d",&c2.a,&c2.b);
c3.a=c1.a+c2.a;
c3.b=c1.b+c2.b;
printf("addition =%.2f+ i%.2f",c3.a,c3.b);
}

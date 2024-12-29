//Equation of motion
#include<stdio.h>
void main()
{
    float u,t,a,S;
    printf("Enter u,t,a values\n");
    scanf("%f%f%f",&u,&t,&a);
    S=(u*t)+(0.5*a*t*t);
    printf("S=%f",S);
}

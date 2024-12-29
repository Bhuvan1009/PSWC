//roots of quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d)/(2*a));
        r2=(-b-sqrt(b)/(2*a));
        printf("the roots are real and distinct");
    }
    else if(d==0)
    {
        r1=(-b/(2*a));
        r2=(-b/(2*a));
        printf("the values of r1,r2 is %f%f",r1,r2);
        printf("the roots are real and eqaul");
    }
    else
    {
        printf("the roots are imaginary");
    }
}

// C program to  perform multiplication of two complex number
#include<stdio.h>
struct complex{
    float a,b;
}c1,c2,c3;
void main()
{
    printf("Enter c1 value of a and b");
    scanf("%f%f",&c1.a,&c1.b);
    printf("Enter c2 value of a and b\n");
    scanf("%f%f",&c2.a,&c2.b);
    c3.a=(c1.a*c2.a)-(c1.b*c2.b);
    c3.b=(c1.a*c2.b)+(c1.b*c2.a);
    printf("The multiplication is %2f+i%2f",c3.a,c3.b);
}

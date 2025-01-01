//product of two numbers using function without arguments,without return values
#include<stdio.h>
void main()
{
int product(void);
int c;
c=product();
printf("product=%d",c);
}
int product()
{
    int x,y,z;
    printf("enter the values ");
    scanf("%d %d",&x,&y);
     z=x*y;
    return(z);
}

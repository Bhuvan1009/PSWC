// Write your c code here week2c.c!
#include<stdio.h>
void main()
{
    int a,b,c,op;
    printf("enter the values of a,b");
    scanf("%d%d",&a,&b);
    printf("enter choice");
    scanf("%d",&op);
    switch(op)
    {
        case 1:c=a+b;
        printf("sum=%d",c);
        break;
        case 2:c=a-b;
        printf("difference=%d",c);
        break;
        case 3:c=a*b;
        printf("product=%d",c);
        break;
        case 4:c=a/b;
        printf("quotient=%d",c);
        break;
        case 5:c=a/b;
        printf("reminder=%d",c);
        break;
        default:
        printf("invalid option");
        break;
    }
}

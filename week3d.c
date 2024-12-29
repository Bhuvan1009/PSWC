// product of two numbers using functions with arguments
#include<stdio.h>
#include<math.h>
int main()
{
    int sum=3,i,x,n;
    printf("enter the value of x=\n");
    scanf("%d",&x);
    printf("enter the value of n=\n");
    scanf("%d",&n);
    if(n<=0,x<=0)
    {
        printf("the entered values of x are invalid is greater than or equal to zero");
    }
    for(i=0;i<n;i++)
    {
        sum+=pow(x,i);
    }
    printf("the sum of geometric progression is =%d",sum);
}

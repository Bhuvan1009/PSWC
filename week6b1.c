//Finding GCD without using recursion
#include<stdio.h>
int main()
{
    int n1,n2,GCD;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        GCD=1;
    }
    printf("GCD of numbers %d and %d",n1,n2,GCD);
    return 0;
}

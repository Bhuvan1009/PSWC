/* To find the difference of two numbers using functions
without arguments,with return value*/
#include<stdio.h>
void main()
{
    int diff(void);
    int c;
    c=diff();
    printf("diff=%d",c);
}
int diff()
    {
        int x,y,z;
        printf("enter the x and y values\n");
        scanf("%d %d",&x,&y);
        z=x-y;
        return(z);
    }

//marks of the students
#include<stdio.h>
void main()
{
    float percentage;
    printf("enter the percentage\n");
    scanf("%f",&percentage);
    if(percentage>=70)
    {
        printf("student got distinction\n");
    }
    else if(percentage >=60 &&percentage<70)
    {
        printf("student got first in class\n");
    }
    else if(percentage >=40 && percentage<60)
    {
        printf("second in class\n");
    }
    else
    {
        printf("fail");
    }
}

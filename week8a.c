//c program to determine whether the given string is palindrome or not
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[20] = "MALAYALAM";
    int i, len, flag = 0;
    
    len = strlen(str);

    for (i = 0; i < len; i++) 
    {
        if (str[i] != str[len-i-1]) 
        {
            flag = 1;
            break;
        }
    }
    printf("the given data is %s\n",str);
    if (flag)
        printf("%s,it is not a palindrome", str);
    else
        printf("%s is a palindrome", str);
        
    return 0;
}

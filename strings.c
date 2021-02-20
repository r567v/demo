#include <stdio.h>
#include <string.h>

void main()
{
    char arr1[]={'a','b','a','a'};
    char arr2[]={'a','a','b','a'};
    check_equ(arr1,arr2);
}

void check_equ(char a1[], char a2[])
{
    int result;
    result = strcmp(a1, a2);
    if(result==0)
    {
        printf("Yes");
    }
    else
    {
        recur_check(a1,a2);
    }

}

void recur_check(char a1[], char a2[])
{
    if(strlen(a1)>1&&strlen(a2)>1)
    {
        char x[25];
        char y[25];
        substring(x, a1, 0, strlen(a1)/2);
        substring(y, a2, 0, strlen(a2)/2);
    }
}

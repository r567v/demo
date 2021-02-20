#include <stdio.h>
 
 
int main()
{
    int num, count=0;
    scanf("%d", &num);

    char arr[num];
    scanf("%s", &arr);

    //printf("%d", count);

    for(int i=0;i <num-1; i++)
    {
        if(arr[i]== arr[i+1])
        {
            count++;
        }
    }

    printf("%d", count);
    
}
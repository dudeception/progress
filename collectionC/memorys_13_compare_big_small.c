#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1,num2;
    printf("please write 2 numbers separately\n");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        printf("%d is big\n",num1);
        printf("%d is small\n",num2);
    }
    else if (num2>num1)
    {
        printf("%d is big\n",num2);
        printf("%d is small\n",num1);
    }
    else
    {
        printf("the numbers are equal\n");
    }
    
    return 0;
}

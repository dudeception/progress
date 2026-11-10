#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1,num2,num3;
    printf("please enter a number\n");
    scanf("%d", &num1);
    printf("please enter a number\n");
    scanf("%d", &num2);
    printf("please enter a number\n");
    scanf("%d", &num3);
       if (num1>num2 && num1>num3)
       {
        printf("the %d number is biggest\n",num1);
       }
       if (num2>num1 && num2>num3)
       {
        printf("the %d number is biggest\n",num2);
       }
        if (num3>num1 && num3>num2)
       {
        printf("the %d number is biggest\n",num3);
       }
        if (num2 == num1 && num2 == num3)
       {
        printf("the numbers are the same size\n");
       }

    return 0;
}

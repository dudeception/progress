#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1,num2,num3;
    printf("please enter 3 numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
       if (num1>num2 && num1>num3)
       {
        printf("the %d number is biggest\n",num1);
       }
       else if (num2>num1 && num2>num3)
       {
        printf("the %d number is biggest\n",num2);
       }
       else if (num3>num1 && num3>num2)
       {
        printf("the %d number is biggest\n",num3);
       }
       else
       {
        printf("the numbers are the same size\n");
       }
    return 0;
    /*
    like the example code above this, all so works
    */
}

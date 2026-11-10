#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1;
    printf("please enter a number\n");
    scanf("%d",&num1);
    if ((num1%2) == 0)
    {
        printf("the number is even\n");
    }
    else if ((num1%2) == 1 || (num1%2) == -1 )
    {
        printf("the number is odd\n");
    }
    else
    {
        printf("something went wrong\n");
    }
    
    return 0;
    /*
    the else if chain can be shortend by just placing else after if
    */
}

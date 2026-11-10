#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1;
    printf("enter a interger thats not smaller than 1 or bigger than 7\n");
    scanf("%d", &num1);
    switch (num1)
    {
        case 1: printf("example 1\n");
    break;
        case 2: printf("example 2\n");

        case 3: printf("example 3\n");
    break;
        case 4: printf("example 4\n");
    break;
        case 5: printf("example 5\n");
    break;
        case 6: printf("example 6\n");
    break;
        case 7: printf("example 7\n");
    break;
        default: printf("you picked a interger thats not viable\n");
    break;
    }
    return 0;
    /*
    this makes it so that instead of many if elses you can use only 1 switch
    forgetting to place a break makes it so it does the other action all so
    press 2 to see the example
    this one is a little esoteric make sure to recheck the result tomorow
    https://www.w3schools.com/c/c_switch.php
    */
}

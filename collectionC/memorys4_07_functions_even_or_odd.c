#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

void hello_world()
{
    printf("helloworld");

}

int evenorodd(int input)
{
    if ((input%2) == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }

}

void evenorodd2(int input)
{
    if ((input%2) == 0)
    {
        printf("its even");
    }

    else
    {
        printf("its odd");
    }

    //void mean that the function does not have a return value
    // void functions can have number calculatiosn inside them they just cant output them

}

int main() 
{
    int num1,abc;
    printf("please enter a number\n");
    scanf("%d",&num1);
    abc=evenorodd(num1);
    printf("its %d ",abc);

    evenorodd2(num1);

    return 0;
    /*
    make your own commands basiclly
    in this i made 2 examples
    make sure to study this throughly because the tutor just showed what to do
    the type it will use must be specified
    https://www.w3schools.com/c/c_functions.php

    void mean that the function does not have a return value

    */
}

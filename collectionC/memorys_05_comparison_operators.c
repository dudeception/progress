#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    /*
    Comparison Operators
    ==  !=  >  <   >=  <=
    https://www.w3schools.com/c/c_operators_comparison.php
    */
    int x=25;
    int y =30;

    printf("%d",x <= y); // d = 1 Less than or equal to
    printf("%d",x >= y); // d = 0 Greater than or equal to
    printf("%d",x == y); // d = 0 equal
    printf("%d",x < y); // d = 1 less than
    printf("%d",x > y); // d = 0 greater than
    printf("%d",x != y); // d = 1 not equal

    return 0;
}

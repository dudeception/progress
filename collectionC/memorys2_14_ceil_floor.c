#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <math.h>

int main()
{
    printf("%f\n",ceil(4.4));
    printf("%f\n",floor(4.8));
    return 0;
    /*
    these 4 are in the <math.h>
    ceil(x) rounds up to the nearest bigger interger
    floor(x) rounds up to the nearest smaller interger
    sqrt(x) do i even need to explain this ? its the root
    pow(x,y) Returns the value of x to the power of y

    this is in the <stdlib.h>
    abs(x) 	Return the absolute (positive) value of a whole number it only uses intergers
    */
}

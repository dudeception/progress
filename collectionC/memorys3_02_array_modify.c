#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    int goog[5]={22,33,11,66,-33};
    printf("%d\n",goog[2]);
    goog[2]=18;
    printf("%d\n",goog[2]);

    return 0;
    /*
    values on the list can be changed
    output :
    11
    18
    */
}

#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main() 
{
    int x=1; //global

    {
        int x=2;
        printf("%d",x); // local bundle
    }

    printf("%d",x);

    return 0;
    /*
    global local logic
    output:
    21
    */
}
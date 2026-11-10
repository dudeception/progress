#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    int goog[3];
    int i= 0;
    do
    {
        scanf("%d", &goog[i]);
        i++;
    }while (i<3);
    i=0;
    
    do
    {
        printf("%d\n",goog[i]);
        i++;
    }while (i<3);
    
    return 0;
    /*
    cool example
    */
}

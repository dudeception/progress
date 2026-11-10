#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    int goog[3];
    printf("enter 3 numbers separtely\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &goog[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",goog[i]);
    }
    
    return 0;
    /*
    examine how this works closely 
    and look at it tomorow
    */
}

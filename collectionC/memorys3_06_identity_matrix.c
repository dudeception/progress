#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    int google[10][10];
    int i,j;

    for (i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (i==j)
            {
                google[i][j]=1;
            }
            else
            {
                google[i][j]=0;
            }
        }
    }

        for (i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%2d",google[i][j]);
        }
        printf("\n");
    }
    return 0;
    /*
    do not use variables i and j close to each other you will confuse both together
    2 indicates how many spaces forward it should be printed on
    output:
    1 0 0 0 0 0 0 0 0 0
    0 1 0 0 0 0 0 0 0 0
    0 0 1 0 0 0 0 0 0 0
    0 0 0 1 0 0 0 0 0 0
    0 0 0 0 1 0 0 0 0 0
    0 0 0 0 0 1 0 0 0 0
    0 0 0 0 0 0 1 0 0 0
    0 0 0 0 0 0 0 1 0 0
    0 0 0 0 0 0 0 0 1 0
    0 0 0 0 0 0 0 0 0 1
    */
}

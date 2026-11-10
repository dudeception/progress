#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    int googleplex[2][3][2];
    int i,u,a;
    printf("please enter numbers for a [2][3][2] array separetly \n");

    for ( i = 0; i < 2; i++)
    {
        for (u = 0; u < 3; u++)
        {
            for ( a = 0; a < 2; a++)
            {
                scanf("%d",&googleplex[i][u][a]);
                printf("enterd number %d\n",googleplex[i][u][a]);
            }
        }
    }

    for ( i = 0; i < 2; i++)
    {
        for (u = 0; u < 3; u++)
        {
            for ( a = 0; a < 2; a++)
            {
                printf("%3d",googleplex[i][u][a]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
    /*
    i is for 3d u is for 2d a is for 1d
    this solution is exactly the same as the 2d one before this just 1 extra dimension
    */
}

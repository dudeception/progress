#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    int google[3][4]={{2,3,11,77},{55,33,22,11},{1,2,3,4}};
    int google2[3][4]={{3,4,11,77},{55,33,22,45},{6,2,3,4}};
    int googleplex[3][4];
    int i,u;

    for (i = 0; i < 3; i++)
    {
        for (u = 0; u < 4; u++)
        {
            googleplex[i][u]=google[i][u]+google2[i][u];
        }
        
    }

     for (i = 0; i < 3; i++)
    {
        for (u = 0; u < 4; u++)
        {
            printf("%4d",googleplex[i][u]);
        }
        printf("\n");
    }
    
    return 0;
    /*
    this solution is kinda similar to the previous one
    output:
    5   7  22 154
    110  66  44  56
    7   4   6   8
    */
}

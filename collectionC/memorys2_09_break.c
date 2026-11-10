#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1;
    printf("watch this\n");
    
for (num1 = 1; num1 <= 256; num1 += num1)
{
    printf("%d\n",num1);
    if (num1 == 16)
    {
        break;
    }
}
printf("the end\n");

    return 0;
    /*
    break command stops the action from going on
    output : 
    
    watch this
    1
    2
    4
    8
    16
    the end
    */
}

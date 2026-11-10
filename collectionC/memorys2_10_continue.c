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
    if (num1 == 16)
    {
        continue;
    }
    printf("%d\n",num1);
}
printf("the end\n");

    return 0;
    /*
    continue command skips the action indicated to the next one
    */
}

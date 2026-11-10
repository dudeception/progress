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
}

    return 0;
    /*
    1 2 4 8 16 32 64 128 256
    */
}

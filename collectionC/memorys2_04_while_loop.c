#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1=0;
    printf("watch this\n");

    while (num1 <= 5)
    {
        printf("%d\n",num1);
        num1++;
    }
    printf("%d",num1);
    
    return 0;
    /*
    it kinda similar to for. if the condition is false it will stop 
    do not give it a empty variable it will break
    and make sure making have at least a way to reach its goal otherwise it will go to infinity
    result:
    watch this
    0
    1
    2
    3
    4
    5
    6
    */
}

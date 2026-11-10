#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    char word[]="words man";

    printf("character size %d\n",strlen(word));
    printf("character size %d\n",sizeof(word));

    return 0;
    /*
    strlen is like size of but it dosent count the \0 at the end
    normaly this code uses some thing called %zu instead of d but in the course it dosent get shown
    */
}

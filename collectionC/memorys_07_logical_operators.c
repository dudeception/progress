#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    /*
    Logical Operators
    && || !

    */
    int x=25;
    int y =20;
    printf("%d",!(x >10 || x<20) );// ters veya / reverse or
    printf("%d",!(x >10 && x<20) );// ters ve / reverse and
    printf("%d",(x >10 || x<20) );// veya / or
    printf("%d",(x >10 && x<20) );// ve / and

    return 0;
}

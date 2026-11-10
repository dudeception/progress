#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main() 
{
    char s1[20] = "Apple";
    strcat(s1,"world?\n");
    printf("%s",s1);

    char s2[20] = "pears";
    strncat(s2,s1,4);
    printf("%s",s2);

    return 0;
    /*
    strcat() function adds the specified string at the end of a string
    strncat() is the same but a specified amount 
    output:
    Appleworld?
    pearsAppl
    */
}

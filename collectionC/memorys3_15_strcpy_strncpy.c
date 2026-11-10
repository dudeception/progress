#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main() 
{
    char s1[] = "Apple";
    char s2[30];
    char s3[] = "sword man ";
    strcpy(s2,s1);

    printf("%s ",s2);
    strncpy(s3,s1,5);

    printf("%s ",s3);

    return 0;
    /*
    strcpy(x,y) command copies the information in one string to a another one
    strn(x,y,i) command copies the first n characters from one string into the memory of another string.
    output:
    Apple Apple man  
    */
}
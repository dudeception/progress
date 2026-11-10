#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main() 
{
    char s1[100];

    printf("enter text\n");
    scanf("%s", s1 );

    printf("the text = %s\n",s1);
    //printf("the text reversed = %s\n",strrev(s1));

    //strrev is not supported in verions iso c99 and later
    //you can find the equivilents in the forgotten.c file
    return 0;
}

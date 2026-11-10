#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main() 
{
    // goal : write bonsoire using strcpy and strncpy
    char s1[]= "bonne";
    char s2[]="soiree";
    char s3[100]="";
    strcpy(s3,s1);
    strncpy(s3+3,s2,5);

    printf("%s",s3);

    return 0;
    /*
    i genuenly have no idea how strings work, without the "" the s3 after bonsoire spit out
    seemingly random letters and numbers most likely something to do with assembly
    and allso the teacher forgot some importent stuff about strcpy and strncpy
    the number added to the string is used to define where where it starts from 
    https://www.w3schools.com/c/ref_string_strncmp.php
    */
}

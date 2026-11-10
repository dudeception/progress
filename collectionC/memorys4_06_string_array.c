#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main() 
{
    char s1[100][100]= {{'o','n','e','\0'},"two","three","four","five"};

    printf("%c",s1[0][2]);
    printf("%c",s1[3][2]);
    printf("%c",s1[0][2]);
    
    return 0;
    /*
    string list are like number lists 
    */
}

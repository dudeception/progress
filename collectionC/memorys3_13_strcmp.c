#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    char word[15]="wArds man";
    char ward[15]="wards woman";
    int output,output2;

    output= strcmp(word,ward);
    output2= strcmp(ward,word);

    printf("%d\n",output);
    printf("%d\n",output2);

    return 0;
    /*
    In C, strcmp() is a built-in library function used to compare two strings lexicographically.
     It takes two strings (array of characters) as arguments,
    compares these two strings lexicographically, and then returns some value as a result.
    https://www.geeksforgeeks.org/c/strcmp-in-c/
    */
}

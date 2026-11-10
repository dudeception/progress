#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main() 
{
    char s1[100]= "programmer man, programmer man with his heart in the code";
    char *sub; // something to do with pointers ignore until you learn pointers
    sub = strstr(s1,"man");

    printf("the new string after search = %s",sub);

    return 0;
    /*
    The strstr() function returns a pointer to the position of the first occurrence of a string in another string.
    https://www.w3schools.com/c/ref_string_strstr.php
    output :
    the new string after search = man, programmer man with his heart in the code
    */
}

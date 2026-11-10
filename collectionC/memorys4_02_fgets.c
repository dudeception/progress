#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main() 
{
    char s1[20];
    printf("please enter name\n");
    //gets(s1); // deprecated and dangerous , consider not using it
    fgets(s1,sizeof(s1),stdin); //gets but better the course didint explain it in depth sizeof can be any number

    printf("%s",s1);

    return 0;
    /*
    https://www.geeksforgeeks.org/c/gets-in-c/
    make sure to read this : https://www.geeksforgeeks.org/c/fgets-function-in-c/
    */
}

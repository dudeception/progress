#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    char word[]={'w','o','r','d','s','\0'};
    char list[]="lists"; // hafızada yeri 6 en sonda '\0' olduğunu düşün
    char fish[100]; // strings need a explicit max size specified in order to work if it is empty

    printf("%s \n",word);
    printf("please enter a string please \n");
    scanf("%s", &fish); // i have no idea whats the problem here but it specifies that it is 'char*' type
    printf("%s \n", fish);
    printf("%c \n", fish[3]); // this is the way to get specific letters in strings
    return 0;
    /*
    if you want to tell by character to character use '\0' in the end

    */
}

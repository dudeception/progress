#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main() 
{
    float num1,num2;
    char a;
    printf("please enter the 2 numbers you wanna use\n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("please enter the oparator you wanna use(+,-,/,*)\n");
    scanf(" %c", &a);

    switch (a)
    {
    case '+' :
        printf("output = %f",num1+num2);
        break;
        
    case '-' :
        printf("output = %f",num1-num2);
        break;

    case '*' :
        printf("output = %f",num1*num2);
        break;

    case '/' :
        printf("output = %f",num1/num2);
        break;

    default: printf("wrong oparator value");
        break;
    }




    return 0;
    /*
    weirdly this code needs a space at 196 in order to work
    scanf commands are weird

    */
}

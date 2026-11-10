#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

float calaction(float a,float b,char c)
{
    switch (c)
    {
    case '+' : return a+b ; break;
    
    case '-' : return a-b ; break;

    case '*' : return a*b ; break;

    case '/' : return a/b ; break;

    default: printf("wrong oparator value"); return 0; break;
    }

}

int main() 
{
    float num1,num2,output;
    char a;
    printf("please enter the 2 numbers you wanna use\n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("please enter the oparator you wanna use(+,-,/,*)\n");
    scanf(" %c", &a);


    output = calaction(num1,num2,a);

    printf("%f",output);

    return 0;
    /*
    weirdly this code needs a space at 240 in order to work
    scanf commands are weird

    */
}

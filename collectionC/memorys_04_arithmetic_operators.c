#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    // https://www.w3schools.com/c/c_operators_assignment.php
    float num=7.5;
    printf("%f\n",7.5+2.5);
    printf("%f\n",7.5-2.5);
    printf("%f\n",7.5*2.5);
    printf("%f\n",7.5/2.5);// integralla yapılırsa en kucuk tam sayi kullaniyor
    printf("%d\n",7%4); // bu kalani soyluyor float yada double kullanmıyor
    printf("%f\n",7.5+2.5);
    printf("%f\n", ++num);//this all so must be a variable this increases by one
    printf("%f\n", --num);//this all so must be a variable this reduces by one

    return 0;
}

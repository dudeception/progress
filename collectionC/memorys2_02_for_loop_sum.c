#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1,i,u = 0;
    printf("enter a number\n");
    scanf("%d",&num1);

for (i = 1; i <= num1; i++)
{
    u= u + i;
}
printf("%d\n",u);

    return 0;
    /*
    very good example
    if you dont understand look at 27. 1-den Girilen Sayıya Kadar Olan Sayıların Toplamını For Döngüsüyle Bulan Program
    */
}

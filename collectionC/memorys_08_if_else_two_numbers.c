#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1,num2;
    printf("please enter 2 numbers separately to compare sizes\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
       if (num1>num2)
       {
        printf("the first number is bigger\n");
       }
       else if (num1<num2)
       {
        printf("the first number is smaller\n");
       }
       else
       {
        printf("the numbers are equal or something went wrong\n");
       }
       
    return 0;

    /*
    amount of else ifs dont matter, dont put ; on things like the example above
    it ends with else 

    */
}

#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    float B,C;
    char a;
    printf("please enter oparator\n");
    scanf("%c", &a);
    printf("please enter 2 numbers separately\n");
    scanf("%f%f",&B,&C);

    switch (a)
    {
    case '+' :
        printf("%.2f + %.2f = %.2f\n",B,C,B+C);
    break;
    case '-' :
        printf("%.2f - %.2f = %.2f\n",B,C,B-C);
    break;
    case '*' :
        printf("%.2f * %.2f = %.2f\n",B,C,B*C);
    break;
    case '/' :
        printf("%.2f / %.2f = %.2f\n",B,C,B/C);
    break;
    
    default: printf("something went wrong\n");
    break;
    }

    return 0;
    /*
    */
}

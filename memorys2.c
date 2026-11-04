#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    int num1;

for (num1 = 0; num1 < 5; num1++)
{
    printf("%d\n",num1);
}

    return 0;
    /*
    repeats until the objective is complete
    first gives the starting point
    second defines the goal
    third does the action to reach the goal the amount of actions dependednt on you
    https://www.w3schools.com/c/c_for_loop.php
    */
}

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

int main()
{
    int num1;
    printf("watch this\n");
    
for (num1 = 1; num1 <= 256; num1 += num1)
{
    printf("%d\n",num1);
}

    return 0;
    /*
    1 2 4 8 16 32 64 128 256
    */
}

int main()
{
    int num1=0;
    printf("watch this\n");

    while (num1 <= 5)
    {
        printf("%d\n",num1);
        num1++;
    }
    printf("%d",num1);
    
    return 0;
    /*
    it kinda similar to for. if the condition is false it will stop 
    do not give it a empty variable it will break
    and make sure making have at least a way to reach its goal otherwise it will go to infinity
    result:
    watch this
    0
    1
    2
    3
    4
    5
    6
    */
}

int main()
{
    int num1=1;
    printf("watch this\n");

    while (num1 <= 10)
    {
        printf("%d\n",num1*100);
        num1++;
    }
    
    return 0;
    /*

    */
}

int main()
{
    int num1=0;
    printf("watch this\n");

    while (num1 <= 10)
    {
        printf("%d\n",num1);
        num1 += 2;
    }
    
    return 0;
}

int main()
{
    int num1=10;
    printf("watch this\n");

    while (num1 > -3)
    {
        printf("%d\n",num1);
        num1--;
    }
    
    return 0;
}

int main()
{
    int num1=10;
    printf("watch this\n");

    while (1) // 1 to make it go on forever 0 to make it not work
    {
        printf("mcman"); 
    }
    
    return 0;
}

int main()
{
    int num1;
    printf("watch this\n");
    
for (num1 = 1; num1 <= 256; num1 += num1)
{
    printf("%d\n",num1);
    if (num1 == 16)
    {
        break;
    }
}
printf("the end\n");

    return 0;
    /*
    break command stops the action from going on
    output : 
    
    watch this
    1
    2
    4
    8
    16
    the end
    */
}

int main()
{
    int num1;
    printf("watch this\n");
    
for (num1 = 1; num1 <= 256; num1 += num1)
{
    if (num1 == 16)
    {
        continue;
    }
    printf("%d\n",num1);
}
printf("the end\n");

    return 0;
    /*
    continue command skips the action indicated to the next one
    */
}

int main()
{
    int num1;
    printf("enter a interger thats not smaller than 1 or bigger than 7\n");
    scanf("%d", &num1);
    switch (num1)
    {
        case 1: printf("example 1\n");
    break;
        case 2: printf("example 2\n");

        case 3: printf("example 3\n");
    break;
        case 4: printf("example 4\n");
    break;
        case 5: printf("example 5\n");
    break;
        case 6: printf("example 6\n");
    break;
        case 7: printf("example 7\n");
    break;
        default: printf("you picked a interger thats not viable\n");
    break;
    }
    return 0;
    /*
    this makes it so that instead of many if elses you can use only 1 switch
    forgetting to place a break makes it so it does the other action all so
    press 2 to see the example
    this one is a little esoteric make sure to recheck the result tomorow
    https://www.w3schools.com/c/c_switch.php
    */
}

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

int main()
{
    bool x=false;
    printf("%d",x);
    return 0;
    /*
    bool is used for true or flase
    output:
    0
    */
}

int main()
{
    printf("%f\n",ceil(4.4));
    printf("%f\n",floor(4.8));
    return 0;
    /*
    these 4 are in the <math.h>
    ceil(x) rounds up to the nearest bigger interger
    floor(x) rounds up to the nearest smaller interger
    sqrt(x) do i even need to explain this ? its the root
    pow(x,y) Returns the value of x to the power of y

    this is in the <stdlib.h>
    abs(x) 	Return the absolute (positive) value of a whole number it only uses intergers
    */
}

int main()
{
    float num1=9/4;
    printf("%f\n",num1); // output : 2.000000
    float num2 = (float)9/4;
    printf("%f\n",num2); // output : 2.250000

    return 0;

}

int main()
{
    printf("%d\t %d\t %d\t \n",'a','b','c'); // gives the ASCI value of the letters shown
    return 0;

}

int main()
{
    int i;
    for (i = 'a'; i <= 'z'; i++)
    {
        printf("%c",i);
    }
    
    return 0;
    /*
    this code used ASCI values to print numbers
    output :
    abcdefghijklmnopqrstuvwxyz
    */

}
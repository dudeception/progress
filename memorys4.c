#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>


void hello_world()
{
    printf("helloworld");

}


int evenorodd(int input)
{
    if ((input%2) == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }

}

void evenorodd2(int input)
{
    if ((input%2) == 0)
    {
        printf("its even");
    }

    else
    {
        printf("its odd");
    }

    //void mean that the function does not have a return value
    // void functions can have number calculatiosn inside them they just cant output them

}

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
    char s1[20] = "Apple";
    strcat(s1,"world?\n");
    printf("%s",s1);

    char s2[20] = "pears";
    strncat(s2,s1,4);
    printf("%s",s2);

    return 0;
    /*
    strcat() function adds the specified string at the end of a string
    strncat() is the same but a specified amount 
    output:
    Appleworld?
    pearsAppl
    */
}

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

int main() 
{
    char s1[100];

    printf("enter text\n");
    scanf("%s", s1 );

    printf("the text = %s\n",s1);
    //printf("the text reversed = %s\n",strrev(s1));

    //strrev is not supported in verions iso c99 and later
    //you can find the equivilents in the forgotten.c file
    return 0;
}

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

int main() 
{
    // goal : write bonsoire using strcpy and strncpy
    char s1[]= "bonne";
    char s2[]="soiree";
    char s3[100]="";
    strcpy(s3,s1);
    strncpy(s3+3,s2,5);

    printf("%s",s3);

    return 0;
    /*
    i genuenly have no idea how strings work, without the "" the s3 after bonsoire spit out
    seemingly random letters and numbers most likely something to do with assembly
    and allso the teacher forgot some importent stuff about strcpy and strncpy
    the number added to the string is used to define where where it starts from 
    https://www.w3schools.com/c/ref_string_strncmp.php
    */
}

int main() 
{
    char s1[100][100]= {{'o','n','e','\0'},"two","three","four","five"};

    printf("%c",s1[0][2]);
    printf("%c",s1[3][2]);
    printf("%c",s1[0][2]);
    
    return 0;
    /*
    string list are like number lists 
    */
}

int main() 
{
    int num1,abc;
    printf("please enter a number\n");
    scanf("%d",&num1);
    abc=evenorodd(num1);
    printf("its %d ",abc);

    evenorodd2(num1);

    return 0;
    /*
    make your own commands basiclly
    in this i made 2 examples
    make sure to study this throughly because the tutor just showed what to do
    the type it will use must be specified
    https://www.w3schools.com/c/c_functions.php

    void mean that the function does not have a return value

    */
}

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

int main() 
{
    int x=1; //global

    {
        int x=2;
        printf("%d",x); // local bundle
    }

    printf("%d",x);

    return 0;
    /*
    global local logic
    output:
    21
    */
}
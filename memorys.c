#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>

int main()
{
    float num1;


    return 0;
    /*
    scanf(" %c", &char1); that should be like that
    or it should be the first one to fix the problem
    */
}

int main()
{
    int can = 20;
    float sayim = 4.64;
    double doublesayim = 4.56;
    char karakterim = 'h';

    /*printf("Can degiskeni hafizada %d byte kadar yer tutar\n",sizeof(can));
    printf("Int hafizada %d byte kadar yer tutar\n",sizeof(int));
    printf("Char hafizada %d byte kadar yer tutar\n",sizeof(char));
    printf("Float hafizada %d byte kadar yer tutar\n",sizeof(float));
    printf("Double hafizada %d byte kadar yer tutar\n",sizeof(double));*/

    printf("Can degiskeni hafizada %d byte kadar yer tutar\n",sizeof(can));
    printf("Char hafizada %d byte kadar yer tutar\n",sizeof(karakterim));
    printf("Float hafizada %d byte kadar yer tutar\n",sizeof(sayim));
    printf("Double hafizada %d byte kadar yer tutar\n",sizeof(doublesayim));
    
    return 0;
}

int main()
{
    const int num = 5;
    // pie = 4;
    printf("%f",pie);
    /*
    define and const give a absolute value to a number
    */
    return 0;
}

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

int main()
{
    /*
    Comparison Operators
    ==  !=  >  <   >=  <=
    https://www.w3schools.com/c/c_operators_comparison.php
    */
    int x=25;
    int y =30;

    printf("%d",x <= y); // d = 1 Less than or equal to
    printf("%d",x >= y); // d = 0 Greater than or equal to
    printf("%d",x == y); // d = 0 equal
    printf("%d",x < y); // d = 1 less than
    printf("%d",x > y); // d = 0 greater than
    printf("%d",x != y); // d = 1 not equal

    return 0;
}

int main()
{
    // https://www.w3schools.com/c/c_operators_assignment.php
    int num=7;
    num = num+3;
    printf("%d\n",num); //output: 10
    int num2=8;
    num2 += 3;
    printf("%d\n",num2); //output: 11
    /*
    assingment operator is basicly Arithmetic but simplified
    example (x=x+3)=(x+=3) this can allso work for - * / %
    
    */

    return 0;
}

int main()
{
    /*
    Logical Operators
    && || !

    */
    int x=25;
    int y =20;
    printf("%d",!(x >10 || x<20) );// ters veya / reverse or
    printf("%d",!(x >10 && x<20) );// ters ve / reverse and
    printf("%d",(x >10 || x<20) );// veya / or
    printf("%d",(x >10 && x<20) );// ve / and

    return 0;
}

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

int main()
{
    int num1,num2,num3;
    printf("please enter a number\n");
    scanf("%d", &num1);
    printf("please enter a number\n");
    scanf("%d", &num2);
    printf("please enter a number\n");
    scanf("%d", &num3);
       if (num1>num2 && num1>num3)
       {
        printf("the %d number is biggest\n",num1);
       }
       if (num2>num1 && num2>num3)
       {
        printf("the %d number is biggest\n",num2);
       }
        if (num3>num1 && num3>num2)
       {
        printf("the %d number is biggest\n",num3);
       }
        if (num2 == num1 && num2 == num3)
       {
        printf("the numbers are the same size\n");
       }

    return 0;
}

int main()
{
    int num1,num2,num3;
    printf("please enter 3 numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
       if (num1>num2 && num1>num3)
       {
        printf("the %d number is biggest\n",num1);
       }
       else if (num2>num1 && num2>num3)
       {
        printf("the %d number is biggest\n",num2);
       }
       else if (num3>num1 && num3>num2)
       {
        printf("the %d number is biggest\n",num3);
       }
       else
       {
        printf("the numbers are the same size\n");
       }
    return 0;
    /*
    like the example code above this, all so works
    */
}

int main()
{
    int num1;
    printf("please enter a number\n");
    scanf("%d",&num1);
    if ((num1%2) == 0)
    {
        printf("the number is even\n");
    }
    else if ((num1%2) == 1 || (num1%2) == -1 )
    {
        printf("the number is odd\n");
    }
    else
    {
        printf("something went wrong\n");
    }
    
    return 0;
    /*
    the else if chain can be shortend by just placing else after if
    */
}

int main()
{
    int num1;
    printf("please enter your age\n");
    scanf("%d",&num1);
    if (num1>=18)
    {
        printf("you can vote\n");
    }
    else
    {
        printf("you cant vote\n");
    }

    return 0;
    /*
    
    */
}

int main()
{
    int num1,num2;
    printf("please write 2 numbers separately\n");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        printf("%d is big\n",num1);
        printf("%d is small\n",num2);
    }
    else if (num2>num1)
    {
        printf("%d is big\n",num2);
        printf("%d is small\n",num1);
    }
    else
    {
        printf("the numbers are equal\n");
    }
    
    return 0;
}

int main()
{
   int sayi1,sayi2;

   printf("Lutfen 2 adet sayi giriniz\n");
   scanf("%d%d",&sayi1,&sayi2);

   if(sayi1 >= sayi2)
   {
       if(sayi1 == sayi2)
       {
          printf("Sonuc : %d = %d",sayi1,sayi2);
       }
       else
       {
            printf("Sonuc : %d > %d",sayi1,sayi2);
       }
   }
   else
   {
      printf("Sonuc : %d < %d",sayi1,sayi2);
   }
    return 0;
}

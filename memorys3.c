#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

int main()
{
    int goog[5]={4,3,5,7,9};

    printf("%d\n",goog[0]); // 4
    printf("%d\n",goog[1]); // 3
    printf("%d\n",goog[2]); // 5
    printf("%d\n",goog[3]); // 7
    printf("%d\n",goog[4]); // 9
    
    return 0;
    /*
    the number determines the value on the list
    remember to recheck this later on
    the number at the start is not necessary it can just be goog[]
    if you give a number that isnt defined it will give a error

    */
}

int main()
{
    int goog[5]={22,33,11,66,-33};
    printf("%d\n",goog[2]);
    goog[2]=18;
    printf("%d\n",goog[2]);

    return 0;
    /*
    values on the list can be changed
    output :
    11
    18
    */
}

int main()
{
    int goog[3];
    printf("enter 3 numbers separtely\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &goog[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",goog[i]);
    }
    
    return 0;
    /*
    examine how this works closely 
    and look at it tomorow
    */
}

int main()
{
    int goog[3];
    int i= 0;
    do
    {
        scanf("%d", &goog[i]);
        i++;
    }while (i<3);
    i=0;
    
    do
    {
        printf("%d\n",goog[i]);
        i++;
    }while (i<3);
    
    return 0;
    /*
    cool example
    */
}

int main()
{
    int google[2][2]={{5,3},{2,8}};
    printf("%d",google[0][0]);
    printf("%d",google[0][1]);
    printf("%d",google[1][0]);
    printf("%d",google[1][1]);

    return 0;
    /*
    lists can be expanded even further
    output:
    5328
    */
}

int main()
{
    int google[10][10];
    int i,j;

    for (i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (i==j)
            {
                google[i][j]=1;
            }
            else
            {
                google[i][j]=0;
            }
        }
    }

        for (i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%2d",google[i][j]);
        }
        printf("\n");
    }
    return 0;
    /*
    do not use variables i and j close to each other you will confuse both together
    2 indicates how many spaces forward it should be printed on
    output:
    1 0 0 0 0 0 0 0 0 0
    0 1 0 0 0 0 0 0 0 0
    0 0 1 0 0 0 0 0 0 0
    0 0 0 1 0 0 0 0 0 0
    0 0 0 0 1 0 0 0 0 0
    0 0 0 0 0 1 0 0 0 0
    0 0 0 0 0 0 1 0 0 0
    0 0 0 0 0 0 0 1 0 0
    0 0 0 0 0 0 0 0 1 0
    0 0 0 0 0 0 0 0 0 1
    */
}

int main()
{
    int google[3][4]={{2,3,11,77},{55,33,22,11},{1,2,3,4}};
    int google2[3][4]={{3,4,11,77},{55,33,22,45},{6,2,3,4}};
    int googleplex[3][4];
    int i,u;

    for (i = 0; i < 3; i++)
    {
        for (u = 0; u < 4; u++)
        {
            googleplex[i][u]=google[i][u]+google2[i][u];
        }
        
    }

     for (i = 0; i < 3; i++)
    {
        for (u = 0; u < 4; u++)
        {
            printf("%4d",googleplex[i][u]);
        }
        printf("\n");
    }
    
    return 0;
    /*
    this solution is kinda similar to the previous one
    output:
    5   7  22 154
    110  66  44  56
    7   4   6   8
    */
}

int main()
{
    int googleplex[2][3][4]={{{2,3,11,77},{55,33,22,11},{1,2,3,4}}
    ,{{3,4,11,77},{55,33,22,45},{6,2,3,4}}};
    return 0;
    /*
    good grief, trying to use 3d arrays might give me a aneurysm
    */
}

int main()
{
    int googleplex[2][3][2];
    int i,u,a;
    printf("please enter numbers for a [2][3][2] array separetly \n");

    for ( i = 0; i < 2; i++)
    {
        for (u = 0; u < 3; u++)
        {
            for ( a = 0; a < 2; a++)
            {
                scanf("%d",&googleplex[i][u][a]);
                printf("enterd number %d\n",googleplex[i][u][a]);
            }
        }
    }

    for ( i = 0; i < 2; i++)
    {
        for (u = 0; u < 3; u++)
        {
            for ( a = 0; a < 2; a++)
            {
                printf("%3d",googleplex[i][u][a]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
    /*
    i is for 3d u is for 2d a is for 1d
    this solution is exactly the same as the 2d one before this just 1 extra dimension
    */
}

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

int main()
{
    char word[]="words man";

    word[2]='l';

    printf("%s",word);

    return 0;
    /*
    demostration on how to change single characters on a string
    */
}

int main()
{
    char word[]="words man";

    printf("character size %d\n",strlen(word));
    printf("character size %d\n",sizeof(word));

    return 0;
    /*
    strlen is like size of but it dosent count the \0 at the end
    normaly this code uses some thing called %zu instead of d but in the course it dosent get shown
    */
}

int main()
{
    char word[15]="wArds man";
    char ward[15]="wards woman";
    int output,output2;

    output= strcmp(word,ward);
    output2= strcmp(ward,word);

    printf("%d\n",output);
    printf("%d\n",output2);

    return 0;
    /*
    In C, strcmp() is a built-in library function used to compare two strings lexicographically.
     It takes two strings (array of characters) as arguments,
    compares these two strings lexicographically, and then returns some value as a result.
    https://www.geeksforgeeks.org/c/strcmp-in-c/
    */
}

int main() 
{
    char s1[] = "Apple";
    char s2[] = "Apalet";
    
    int res = strncmp(s1, s2, 4);
    if (res == 0) 
        printf("s1 and s2 are same %d ",res);
  	else if (res < 0)
      	printf("s1 is lexicographically smaller than s2 %d ",res);
  	else
      	printf("s1 is lexicographically greater than s2 %d ",res);
    
    int res2 = strncmp(s1, s2, 2);
    if (res2 == 0) 
        printf("s1 and s2 are same %d ",res2);
  	else if (res2 < 0)
      	printf("s1 is lexicographically smaller than s2 %d ",res2);
  	else
      	printf("s1 is lexicographically greater than s2 %d ",res2);
    return 0;
    /*
    strings are confusing
    strncmp is like strcmp but you chose the amount you wanna compare
    output:
    s1 is lexicographically greater than s2 1 s1 and s2 are same 0 
    */
}


int main() 
{
    char s1[] = "Apple";
    char s2[30];
    char s3[] = "sword man ";
    strcpy(s2,s1);

    printf("%s ",s2);
    strncpy(s3,s1,5);

    printf("%s ",s3);

    return 0;
    /*
    strcpy(x,y) command copies the information in one string to a another one
    strn(x,y,i) command copies the first n characters from one string into the memory of another string.
    output:
    Apple Apple man  
    */
}
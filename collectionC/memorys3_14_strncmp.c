#include <stdio.h>
#include <stdlib.h>
#define pie 3.14
#include <stdbool.h>
#include <string.h>

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

/*
CH-230-A
a6_p5
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    unsigned char c;
    scanf("%c",&c);//we read an unsigned char
    getchar();
    printf("The decimal representation is: %d\n",c);//we print the decimal representation
    printf("The backwards binary representation is: ");//we print the last bit
    while(c>0){
 
       if ((c&1)==0) //1=00000001 and used as a mask
 
        {
            printf("0"); //we print each case
        }
        else{
            printf("1");
        }
        c>>=1;  //shifting c
    }
    printf("\n");
    return 0;
}
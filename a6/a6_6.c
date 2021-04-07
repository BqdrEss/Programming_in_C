/*
CH-230-A
a6_p6
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    unsigned char c;
    unsigned int mask=128;   //mask = [1000 0000]
    scanf("%c",&c);//we read an unsigned char
    getchar();
    printf("The decimal representation is: %d\n",c);//we print the decimal representation
    printf("The binary representation is: ");//we print the decimal representation
    while(mask > 0)
   {
        if((c & mask) == 0 ){
        printf("0");
        }
    else{
        printf("1");
        mask >>= 1 ;  // Right Shift
    }
   }
    printf("\n");
    return 0;
}

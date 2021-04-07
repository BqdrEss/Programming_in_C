/*
CH-230-A
a6_p2
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#define mac(c)( c & 1 ? 1 : 0)//c!=0 and true gives 1
// else gives 0
int main()
{
    unsigned char ch;
    scanf("%c",&ch);//we read an unsigned char
    getchar();
    printf("The decimal representation is:%d\n",(int)ch);//we print the decimal representation
    printf("The decimal representation is:%d\n",mac(ch));//we print the last bit
    return 0;
}
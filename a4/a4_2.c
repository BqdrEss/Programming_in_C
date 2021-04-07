/*
CH-230-A
a4_p2
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[50];
    int i=0;
    fgets (s,sizeof(s),stdin);//we use fgets to read the string
    while (i <= strlen(s)-2){//the wile is used to jump to the other line
        if(i%2==0){
            printf("%c\n",s[i]);//here we print the first character
        }
        else{
            printf(" %c\n",s[i]);//here we print the second character with a space
        }
        i++;
    }
}
/*
CH-230-A
a5 p7.c
Badr Essefiany
b.essefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int StrLength;
    char str_1 [100]; //max length of string 1 100 is characters
    char str_2 [100];//max length of string 2 is 100 characters
    scanf("%[^\n]",str_1); //continue reading until the 'enter' key is pressed
    getchar();
    scanf("%[^\n]",str_2);//continue reading until the 'enter' key is pressed
    StrLength=strlen(str_1)+strlen(str_2); // we add up the length of the two strings
    char *strptr= (char *) malloc (sizeof(char)*StrLength);//dynamically allocating memory
    strcpy(strptr,(strcat(str_1,str_2)));
    printf ("Result of concatenation: %s\n",strptr);//printing the resulr
    free (strptr); //clearing memory
    return 0;
}

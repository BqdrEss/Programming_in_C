/*
CH-230-A
a2_p8.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    if ((x%7==0) && (x%2==0)){ // this is the condition for divisibility
        printf ("The number is divisible by 2 and 7\n");}
 
    else
    {
        printf ("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
    }
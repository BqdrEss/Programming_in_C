/*
CH-230-A
a5 p11.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
 
bool prime (int);
int main()
{
    int n;
    scanf ("%d",&n); //read an integer from the keyboard
    if (prime(n)==1)
        printf ("%d is prime\n",n);
    else
        printf ("%d is not prime\n",n);
    return 0;
}
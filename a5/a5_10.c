/*
CH-230-A
a5_p10.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void fct(int n){
    if(n!=0){//we put a condition to stop the loop
        printf("%d\n",n);// we print the element
        fct(n-1);//we call the function inside itself
    }
}
 
int main()
{   int n;
    scanf("%d",&n);
    fct(n);
    return 0;
}
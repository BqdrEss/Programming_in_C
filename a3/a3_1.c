/*
CH-230-A
a3_p1.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
 
int main ()
{
     float x;
    int n;
        scanf("%f",&x);
        scanf("%d",&n);
 while (n<=0){   //I used a while so n will have a valid integer value
         printf ("Input is invalid, reenter value\n");
         scanf("%d",&n); 
}
    int i;
    for (i=0;  i<n;  i++) { // I used a for loop to print
         printf("%f\n",x);
} 
    return 0;
}
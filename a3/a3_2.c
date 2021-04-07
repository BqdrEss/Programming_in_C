/*
CH-230-A
a3_p2
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char c;
    int n;
  scanf("%c",&c);
  scanf("%d",&n);
    for (int i=0;i<=n;i++){ //we to i between 0 and n so it prints n elements
         printf("%c\n",c-i); //we simply print the equivalent of ch-n
}
}
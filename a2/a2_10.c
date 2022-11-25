/*
CH-230-A
a2_p10.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
int main () {
    int n, i=1, h=24*i;
    scanf("%d",&n);
 if (n==0){return 0;}
 else{
     while(i<n){
         printf("%d days = %d hours",i,h);
         i++;
     }
 }
return 0;
}

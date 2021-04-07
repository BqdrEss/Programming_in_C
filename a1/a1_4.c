/*
CH-230-A
a1 p4
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
 
int main() {int x=17;
    int y=4;
    int sum=x+y;
    int prod=x*y;
    int diff=x-y;
    float div=(float)x/y; /*we use float between barkets to recall x and y so the division is right*/
    int mod=x%y; /*we use % for modulo*/
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("sum=%d\n",sum);
    printf("product=%d\n",prod);
    printf("difference=%d\n",diff);
    printf("division=%f\n",div);
    printf("remainder of division=%d\n",mod);
    return 0;
    }
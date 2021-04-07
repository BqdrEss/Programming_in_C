/*
CH-230-A
a2_p6.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
int main () {
    double  x,y ;
    scanf("&lf",x);//we use lf to call a double
    scanf("&lf",y);
    int *ptr_one,*ptr_two,*ptr_three;//we declare pointers by*ptr...
    *ptr_one = x;
    *ptr_two = x;
    *ptr_three = y;
    printf ("the memory adress of the first pointer is %d\n",ptr_one);// ptr_one and ptr_two should be equal
    printf ("the memory adress of the second pointer is %d\n",ptr_two);
    printf ("the memory adress of the third pointer is %d",ptr_three);
    return 0;
}
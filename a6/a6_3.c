/*
CH-230-A
a6_p3.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b,c) (((a) > (b) ? (a) : (b)) > (c) ? (((a) > (b) ? (a) : (b))) : (c))//this macro define the max
#define MIN(a,b,c) (((a) < (b) ? (a) : (b)) < (c) ? (((a) < (b) ? (a) : (b))) : (c))//this macro define the min
#define MID(a,b,c) ( (MIN(a,b,c)+ MAX(a,b,c))/2)//this macro define the mid_range
 
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);//we read 3 float from the keyboard
    printf("The mid-range is: %.6f\n",MID(a,b,c));//we print the midrange as a float with precision 6
    return 0;
}

/*
CH-230-A
a6-p1.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#define swap(a,b,c) {c t=a;a=b;b=t;}//a and b are the variables we want to swap
// c is the type of data
int main()
{
    int n,m;
    double x,y;
    scanf("%d",&n);  //enter the first integer
    scanf("%d",&m);  //enter the second integer
    scanf("%lf",&x); //enter the first double
    scanf("%lf",&y); //enter the second double
    swap(n,m,int);   //we swap the integers
    swap(x,y,double);//we swap the doubles
    printf("After swapping:\n");
    printf("%d\n%d\n",n,m);
    printf("%.6lf\n%.6lf\n",x,y);
    return 0;
}

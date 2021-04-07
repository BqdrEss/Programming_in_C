/*
CH-230-A
a2 p4
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    float a,b,h;
    scanf("%f",&a);// we use f because its a float
    scanf("%f",&b);// we use f because its a float
    scanf("%f",&h);// we use f because its a float
    float s=a*a , r= a*b, t= (a*h)/2 , tr=((a+b)*h)/2;// we assign all the areas
    printf("square area=%f\n",s);                    //operations to some variable
    printf("rectangle area=%f\n",r);                //that we can call in the fct printf
    printf("triangle area=%f\n",t);
    printf("trapezoid area=%f\n",tr);
return 0;
}
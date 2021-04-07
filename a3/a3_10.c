/*
CH-230-A
a3_p10
Badr Essefiany
Bessefiany@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
float product(float a, float b){
    float p=a*b;
    return p; 
    }
void productbyref(float a, float b, float *p){
        *p =a*b;
        printf("the product by reference is %f\n",*p);
}
void modifybyref(float *a, float *b){
    *a+=3;
    *b+=11;
    printf("the first change by reference is %f\n",*a);
    printf("the second change by reference is %f\n",*b);
}
int main (){
float x,y,p;
scanf("%f",&x);
scanf("%f",&y);
printf("the product is:%f\n",product(x,y));
productbyref(x,y,&p);
modifybyref(&x,&y);
return 0;
}

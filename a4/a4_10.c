/*
CH-230-A
a4_p10
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div,float *pwr, float *invb)
{
    *prod = a*b; //we calculate the product by reference
    *div=a/b;//we calculate the division by reference
    *pwr=pow(a,b);//we calculate the result of a^b by reference
    *invb=(float)1/b;//we calculate the result of 1/b by reference
}
int main()
{
    float a,b,prod,div,pwr,invb;
    printf("Enter two numbers: \n");
    scanf("%f%f", &a, &b);
    proddivpowinv(a,b,&prod,&div,&pwr,&invb);//we call the function
    printf("the product is:%f\n",prod);//we print
    printf("the division is:%f\n",div);
    printf("the result of a^b is:%f\n",pwr);
    printf("the result of 1/b is:%f\n",invb);
    return 0;
}

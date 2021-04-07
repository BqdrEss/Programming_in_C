/*
CH-230-A
a3_p6
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
float to_pounds(int kg, int g){
    return 2.2*(kg+0.001*g);
}
int main()
{
    int kg,g;
    scanf("%d",&kg); // to enter the weight in kg
    scanf("%d",&g); // to enter the weight in g
    printf("Result of conversion: %f\n",to_pounds(kg,g));//we plot the function
    return 0;
}
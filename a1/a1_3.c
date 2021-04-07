/*
CH-230-A
a1 p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
 
int main() {
float result; /*we use float because the result of the division is not an integer*/
int a = 5;
float b = 13.5;
result = a / b;
printf("The result is %lf\n", result);/*we print the result*/
return 0;
}
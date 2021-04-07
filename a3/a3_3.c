/*
CH-230-A
a3_p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
float convert(int cm){
  float km;
  km = 0.00001*cm;
  return km;
} //the function prints km converted to cm
int main() {
  int n;
    scanf("%d",&n);
    printf("Result of conversion: %f\n",convert(n));//we call the convert function
 return 0;
  }
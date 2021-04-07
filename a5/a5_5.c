/*
CH-230-A
a5_p5.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
 
double scalar_product(int n, double v[n], double w[n])
{
    double M[n];
    double b=0;
    int i;
    for (i=0; i<n; i++)
    {
    M[i] = v[i]*w[i];
    b+= M[i];
    }
    return b;
}
 
int main() {
int n, i;
scanf("%d", &n);
double v[n], w[n];
for (i=0; i<n; i++)
{
    scanf("%lf", &v[i]);
}
for (i=0; i<n; i++)
{
    scanf("%lf", &w[i]);
}
double a1, a2;
a1=a2=v[0];
double b1, b2;
b1=b2=w[0];
int A, B , C , D ;
A=B=C=D=0;
  for (int i=0; i<n ;i++)
{   if(a1<v[i]){a1=v[i]; A=i;}
    if(a2>v[i]){ a2=v[i];C=i;}
    if(b1<w[i]){b1=w[i]; B=i;}
    if(b2>w[i]){ b2=w[i]; D=i;}
}
printf("Scalar product=%lf\n", scalar_product(n, v, w));    //we print the scaler product
printf("The smallest = %lf\n",a2);  //we print the smallest value of v
printf("Position of smallest = %d\n", C);   //we print the position of the smallest value of v
printf("The largest = %lf\n", a1);  //we print the largest value of v
printf("Position of largest = %d\n", A);//we print the position of the largest value of v
printf("The smallest = %lf\n",b2);  //we print the smallest value of w
printf("Position of smallest = %d\n", D);//we print the position of the smallest value of w
printf("The largest = %lf\n", b1);  //we print the largest value of w
printf("Position of largest = %d\n", B);//we print the position of the largest value of w
return 0;
}

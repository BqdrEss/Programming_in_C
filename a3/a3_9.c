/*
CH-230-A
a3_p9
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
double sum25( double v[], int n)
{
    double sum;
    if (n<=5){
            return -111;
    }
    else{
        sum = v[2] + v[5];
        printf("sum=%lf\n", sum);
        return sum;
    }
}
int main()
{
    int n,i=0;
    double v[20];
    scanf("%d", &n);
    if (n<=5){   //i use if function to print an error message and return -111
            printf("One or both positions are invalid\n");
            sum25(v,n);
            //break;
            }
    else {
    while(i<n)
    {
        scanf("%lf", &v[i]);
        i++;
    }
    sum25(v,n);}
return 0;
}
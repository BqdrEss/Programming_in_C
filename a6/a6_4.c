/*
CH-230-A
a6_p4
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE
 
int main()
{
    int n;
    int i;
    int sum=0;
    scanf("%d", &n);//enter number of dimensions
    int arr1[n];
    int arr2[n];
    for (i=0; i<n; i++)
 
    {
        scanf("%d", &arr1[i]);//enter elements of first vector
    }
    for (i=0; i<n ; i++)
 
    {
        scanf("%d", &arr2[i]);//enter elements of second vector
    }
 
 
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    int j;
    for(j=0; j<n; j++)
    {
        printf("%d\n", arr1[j]*arr2[j]);//print INTERMEDIATE values
 
    }
#endif
    int k;
    for(k=0; k<n; k++)
    {
    sum+=arr1[k]*arr2[k];
    }
    printf("The scalar product is: %d\n", sum);//print the scalar product
    return 0;
}

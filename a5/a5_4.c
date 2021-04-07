/*
CH-230-A
a5 p4.c
Badr Essefiany
b.essefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
void divby5(float arr[], int size)
{
int idx;
    for (idx=0; idx<size; idx++)
        arr[idx]=arr[idx]/5; //dividing every element by 5
}
 
int main()
{
int idx, size;
    scanf ("%d",&size);
    float *arr = (float*) malloc (sizeof(float)*size); //dynamically allocating the array
 
      if(arr){
        for(idx=0; idx<size; idx++)
           scanf ("%f",&arr[idx]) ;
       }
 
    printf ("Before:\n");
 
      for (idx=0; idx<size; idx++)
        printf ("%5.3f ", arr[idx]);
 
    printf ("\nAfter:\n");
    divby5 (arr,size);  //using the function
 
      for (idx=0; idx<size; idx++)
        printf ("%5.3f ",arr[idx]);
 
    printf ("\n");
    free (arr);
    return 0;
}

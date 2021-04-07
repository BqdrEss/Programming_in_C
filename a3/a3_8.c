/*
CH-230-A
a3_p8
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
float sum(float arr[],int x){
    float sum=0;
    for(int i=0; i<x; i++)
    {
        sum +=arr[i];
 
    }
    return sum;
}
float avg(float arr[],int x){
    return (float)sum(arr,x)/x; //avg=(sum+arr)/x
}
int main()
{
   float arr[10]={0};
   int i=0;
while (i < 10){
  scanf("%f", &arr[i]);
  if (arr[i]==-99){break;}  //this is the condition to
  i++;                // break if the entred number
}                //is -99
    printf("the sum is: %f\n",sum(arr,i));
    printf("the average is: %f",avg(arr,i));
 
    return 0;
}

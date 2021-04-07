/*
CH-230-A
a4_p6
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void thv(int arr[],int n);
int main()
{
    int n;
    printf("number of  integers:");
    scanf("%d",&n);//her we declare the number of integers
    int *arr=malloc(n*sizeof(int));//we allocate the memory
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);}//we read the elements of the array
    thv(arr,n);//we call the memory
    free(arr);//we free the memory
    return 0;
}
 
void thv(int arr[],int n){
    int hv1=0,hv2=0;
    for(int i=0;i<n;i++){
            if(arr[i]>hv1){
                hv1=arr[i];
            }
        }
        for(int j=0;j<n;j++){
            if(arr[j]<hv1){
                    if(arr[j]>hv2){
                    hv2=arr[j];
                    }
            }
        }
    printf("the two highest values are:%d\t%d",hv1,hv2);
}

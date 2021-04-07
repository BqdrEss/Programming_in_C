/*
CH-230-A
a5 p2.c
Badr Essefiany
b.essefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
void divby5(float arr[], int size){
    for (int i=0;i<size;i++){
        arr[i]=arr[i]/5;    //we simply divide any element of the array by 5
    }
}    //as the function is void it shouldn't return anything
 
int main(){
        float *arr=malloc(6*sizeof(float)); // we allocate the memory
       // arr[6]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};   //we write down the elements of the array
       arr[0]=5.5,arr[1]=6.5,arr[2]=7.75,arr[3]=8.0,arr[4]=9.6,arr[5]=10.36;
        printf("Before:\n");
       for(int i=0;i<6;i++){   // we use a for loop to print the elements of the array
            printf("%.3f ",arr[i]);
        }
        printf("\n");
        divby5(arr,6);    //we call the function
        printf("After:\n");    //we use a for loop to print the result
        for(int i=0;i<6;i++){
            printf("%.3f ",arr[i]);
        }
    printf("\n");
    free(arr);  // we return the memory
    return 0;
}

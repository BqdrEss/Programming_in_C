/*
CH-230-A
a4_p9
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n){
    int i=0,j=0,product=0;
    float max=arr[0];//max is used to determine the largest element
    float min = arr[0];//max is used to determine the largest element
    while (i < n) {//the first while is used to give max its right value
        if (arr[i] > max){
            max = arr[i];}
            i++;
    }
    while (j < n) {//the second while is used to give min its right value
        if (arr[j] < min){
            min = arr[j];}
            j++;
        }
    product= max*min;//her it simply the product of the two values
    return product;
}
int main()
{
    int n;
    printf("number of integers:");//to determine the number of integers
    scanf("%d",&n);
    int *arr= malloc(4*n);//we allocate some memory for our array and *4 because its int
    for(int i=0;i<n;i++){
            printf("Enter element [%d] : ",i+1);
            scanf("%d",&arr[i]);
            }
    printf("the product is:%d\n",prodminmax(arr,n));//her we call the function
    free(arr);//we use free to deallocate the memory
    return 0;
}

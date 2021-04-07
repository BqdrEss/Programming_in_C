/*
CH-230-A
a4_p7
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
void mtx(int n,int arr[n][n]);
void she(int n,int arr[n][n]);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);}
 
    printf("The entered matrix is:\n");
    mtx(n,arr);
    printf("Under the main diagonal:\n");
    she(n,arr);
    printf("\n");
    return 0;
}
 
void mtx(int n,int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }
}
 
void she(int n,int arr[n][n]){
  for(int i = 0; i < n; i++){
        for(int j =0; j <i; j++){
            printf("%d ", arr[i][j]);
        }
    }
}

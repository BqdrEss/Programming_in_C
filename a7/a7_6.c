/*
CH-230-A
a7_p6.c
Badr Essefiany
b.essefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
struct person {
char name[30];
int age;
};
typedef struct person Person;
void bubblesort(Person arr[],int n){
     Person x;
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(arr[j].name[0]<arr[i].name[0]){
                    x=arr[j];
                    arr[j]=arr[i];
                    arr[i]=x;
                }
            }
 
     }
}
void bubblesort0(Person arr[],int n){
    Person x;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j].age<arr[i].age){
                x=arr[j];
                arr[j]=arr[i];
                arr[i]=x;
            }
            else if((arr[j].age)=(arr[i].age)){
                if(arr[j].name[0]<arr[i].name[0]){
                    x=arr[j];
                    arr[j]=arr[i];
                    arr[i]=x;
                }
            }
        }
    }
 
}
void (*bubbblesort[2])(Person arr[],int n) = {bubblesort,bubblesort0};
 
int main(){
    int n,i;
    scanf("%d",&n);
    Person arr[n];
    for(i=0;i<n;i++){
        scanf("%s",&arr[i].name);
        scanf("%d",&arr[i].age);
    }
    (*bubbblesort[0])(arr,n);
    for (i=0;i<n;i++){
        printf("{%s, %d}; ",arr[i].name,arr[i].age);
    }
    printf("\n");
    (*bubbblesort[1])(arr,n);
    for (i=0;i<n;i++){
        printf("{%s, %d}; ",arr[i].name,arr[i].age);
    }
    return 0;
}

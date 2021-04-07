/*
CH-230-A
a7_p5.c
Badr Essefiany
b.essefiany@jacobs-university.de
*/
#include <stdlib.h>
#include <stdio.h>
int cmpfunc0(const void *a,const void *b){
    return (*(int *)a-*(int *)b);
}
int cmpfunc1(const void *a,const void *b){
    return (*(int *)b-*(int *)a);
}
int main(){
    int n;
    int (*func0)(const void*,const void*);
    func0=&cmpfunc0;
    int (*func1)(const void*,const void*);
    func1=&cmpfunc1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n+1;i++){
        scanf("%d",&arr[i]);
    }
    char c;
    while(1){
        scanf("%c",&c);
        //getchar();
        switch(c){
            case 'a':
                qsort(arr,n,sizeof(int),func0);
                for(int i=0;i<n;i++){
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 'd':
                qsort(arr,n,sizeof(int),func1);
                for(int i=0;i<n;i++){
                printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 'e':
                exit(1);
                break;
        }
    }
}

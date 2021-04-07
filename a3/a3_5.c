/*
CH-230-A
a3_p5
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
double sum(double arr[],int n){
    double sum=0;
    for (int i=0;i<n;i++){
        sum += arr[i];}
    return sum;
}
double av(double arr[],int n){
    return (double)sum(arr,n)/n;
}
 int main() {
 double arr[100];
 char c;
 int i, n;
    printf("enter a character:");
    scanf("%c",&c);
    scanf("%d",&n);
    for(i=0; i<n; i++)
    scanf("%lf", &arr[i]);
  switch (c) {
    case 's':
        printf("Sum is = %lf\n",sum(arr,n));
        break;
    case 'p':
        for(i=0; i<n; i++){
        printf("the list : %lf\n", arr[i]);}
        break;
    case 't':
        for(i=0;i<n; i++){
                printf("the list in F : %lf\n", 1.8*arr[i]+32);}
        break;
    default:
            printf("The mean  : %lf\n", av(arr,n));
            break;
  }
        return 0;
}

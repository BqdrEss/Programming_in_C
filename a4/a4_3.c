/*
CH-230-A
a4_p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
float geometric_mean(float arr[], int num);
float max(float arr[],int num);
float min(float arr[],int num);
float sum(float arr[],int num);
 
int main()
{
    char c;
    float arr[15]; // array of 15
    int i;
    for( i=0;i<15;i++){
        scanf("%f",&arr[i]);// loop to scan the elements of the array 1 by 1
        if(arr[i]<0){break;}// loop breaks when u enters a negative value
    }
    float n=i;
    printf("enter a character: ");
    getchar();
    scanf("%c",&c);//scanning the character
    switch(c){
    case 'm':// case of char = m
        printf("geometric mean: %f\n",geometric_mean(arr,n));
        break;
    case 'h':// case of char = h
        printf("highest value: %f\n", max(arr,n));
        break;
    case 'l':// case of char = l
        printf("highest value: %f\n", min(arr,n));
        break;
    case 's':// case of char = s
        printf("sum: %f\n", sum(arr,n));
        break;
    default:
        printf("GAME OVER!!\n");
        break;
    }
}
 
float geometric_mean(float arr[], int num){
    float gmean=1;
    for (int i=0;i<num;i++){
            gmean=gmean * arr[i];
    }
    gmean= pow(gmean ,(float)1/num);
    return gmean;
    }
 
float max(float arr[],int num){
    int i=0;
    float max=arr[0];
    while (i < num) {
        if (arr[i] > max){
            max = arr[i];}
            i++;
    }
    return max;
}
float min(float arr[],int num){
    int i=0;
    float min = arr[0];
    while (i < num) {
        if (arr[i] < min){
            min = arr[i];}
            i++;
        }
 
    return min;
}
 
float sum(float arr[],int num) {
    int i=0;
    float sum = 0;
    for (i=0 ;i<num;i++) {
            sum += arr[i];
    }
    return sum ;
}

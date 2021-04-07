/*
CH-230-A
a3_p11
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
int main(){
    char one[100]=" ";
    char two[100]=" ";
    char c;
    gets(one);
    gets(two);
    scanf("%c",&c);
    printf("length1=%ld\n",strlen(one));
    printf("length2=%ld\n",strlen(two));
    strcat(one,two);
    printf("concatenation=%s\n",one);
    char three[100];
    strcpy(three,two);
    printf("copy=%s\n",three);
    while (strcmp(one,two)==0){
            printf ("one is equal to two\n");
    break;}
    while (strcmp(one,two)==-1){
        printf("one is smaller than two\n");
        break;}
    while (strcmp(one,two)==1) {
        printf("one is larger than two\n");
    break;
    }
    for(int i=0;i<strlen(two);i++)
{
    if(two[i]==c)
{
printf("the position is:%d",i);
}
    return 0;
}

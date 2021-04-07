/*
CH-230-A
a4_p5
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int count_consonants(char str[]){
    int c=0,i;
    char *p;
    for ( i=0;*(p+i)!='\n';i++){
        p = str;
        if((*(p+i)>='A' && *(p+i)<='Z')||(*(p+i)>='a' && *(p+i)<='z'))
            {
                c++;
        }
        if(*(p+i)=='A' || *(p+i)=='E' || *(p+i)=='Y' ||*(p+i)=='U' ||*(p+i)=='I' ||*(p+i)=='O' ||
            *(p+i)=='a' || *(p+i)=='e' || *(p+i)=='y' ||*(p+i)=='u' || *(p+i)=='i' ||*(p+i)=='o')
            {
                c--;
            }
 
        /*if(*(p+i)>'a' && *(p+i)<'z'){
            while(*(p+i)!='a' || *(p+i)!='e' || *(p+i)!='y' ||*(p+i)!='u' || *(p+i)!='i' ||*(p+i)!='o' )
            {
                c++;
            }*/
        }
    return c;
}
int main (){
    char str[100];
    while(1){
            fgets(str,sizeof(str),stdin);
            if(str[0]=='\n'){
                return 0;
            }
            printf("Number of consonants=%d\n",count_consonants(str));
    }
}

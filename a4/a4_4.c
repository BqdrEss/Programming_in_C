/*
CH-230-A
a4_p4
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int count_consonants(char str[]){
    int c=0,i;
    for ( i=0;str[i]!='\n';i++){
        char b =  str[i];
        if((b>='A' && b<='Z') || (b>='a' && b<='z')){
                c++;
        }
        if(b=='A' || b=='E' || b=='Y' ||b=='U' || b=='I' || b=='O'||
            b=='a' || b=='e' || b=='y' ||b=='u' || b=='i' || b=='o'){
            c--;}
 
          /*if(b=='a' || b=='e' || b=='y' ||b=='u' || b=='i' || b=='o'){
            c--;
          }
            if(b>64 && b<91){
                c++;
            }*/
 
        else if(str[i]=='\n'){
            break;
        }
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

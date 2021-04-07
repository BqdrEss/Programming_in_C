/*
CH-230-A
a7_p4.c
Badr Essefiany
b.essefiany@jacobs-university.de
*/
#include <stdlib.h>
#include<string.h>
#include<stdio.h>
void upper(char *str);
void lower(char *str);
void switch_ch(char *str);
void exit_ch(char *str);
void (*func[4])(char*)={upper,lower,switch_ch,exit_ch}; /* define pointer to function */
int main(){
    int n;
    char str1[50];
    fgets(str1,sizeof(str1),stdin);
    char *str2=malloc(strlen(str1)*sizeof(char));
    while(1){
        strcpy(str2,str1);
        scanf("%d",&n);
            (*func[n-1])(str2);
        }
        free(str2);
 
    return 0;
}
 
void upper(char *str){
    char *p;
    for(p=str;*p;p++){
        if ('a' <= *p && *p <= 'z'){/* if lower-case      */
            *p ^= (1 << 5); // we use the binary representation
        }
    }
    printf("%s",str);
}
void lower(char *str){
    char *p;
    for(p=str;*p;p++){
        if ('A' <= *p && *p <= 'Z'){/* if upper-case      */
            *p |= (1 << 5); // we use the binary representation
        }
    }
     printf("%s",str);
}
 
void switch_ch(char *str){
    char *p;
    for(p=str;*p;p++){
        if ('A' <= *p && *p <= 'Z'){/* if upper-case      */
            *p |= (1 << 5); // we use the binary representation
        }
        else if ('a' <= *p && *p <= 'z'){/* if lower-case      */
            *p ^= (1 << 5); // we use the binary representation
        }
    }
    printf("%s",str);
}
void exit_ch(char *str){
    free(str);
    exit(1);
}

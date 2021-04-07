/*
CH-230-A
a4_p11
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void replaceAll(char *str, char c, char e){
    for(int i=0; i<strlen(str); i++){
        if(str[i]== c)
            str[i]= e;
 
    }
}
int main() {
    char *string=malloc(80*sizeof(char));
    char c,e;
    while(1){
        fgets(string, sizeof(string), stdin);
            if (string=='stop')
                {
                break;
                }
        scanf("%c", &c);
        getchar();
        scanf("%c", &e);
        getchar();
        printf("the string before replacement is: %s\n", string);
        replaceAll(string, c, e);
        printf("the string after replacement is: %s\n", string);
    }
    free(string);
    return 0;
}

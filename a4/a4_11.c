/*
CH-230-A
a4_p11
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
 
int count_insensitive(char *str, char c){
int x=0;
for(int i=0;i<strlen(str); i++){
        if((int)str[i] >= 64 && (int)str[i] <= 91){
            if ((str[i]== c)||(tolower(str[i])==c)){
                x++;
            }
        }
        else if((int)str[i] >= 96 && (int)str[i] <= 123){
            if((str[i]== c)||(toupper(str[i])==c)){
                x++;
            }
        }
        else if( str[i]==c){
            x++;
        }
}
return x;
}
int main() {
    char *str1=malloc(50*sizeof(char));
    fgets(str1, sizeof(str1), stdin);
    char *str2=malloc((strlen(str1))*sizeof(char));
    strcpy(str2,str1);
    free(str1);
    printf("The character 'b' occurs %d times.\n", count_insensitive(str2,'b'));
    printf("The character 'H' occurs %d times.\n", count_insensitive(str2,'h'));
    printf("The character '8' occurs %d times.\n", count_insensitive(str2,'8'));
    printf("The character 'u' occurs %d times.\n", count_insensitive(str2,'u'));
    printf("The character '$' occurs %d times.\n", count_insensitive(str2,'$'));
    free(str2);
    return 0;
}

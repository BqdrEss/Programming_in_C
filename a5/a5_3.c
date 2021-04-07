/*
CH-230-A
a5 p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
int count_lower(char* str){
    int ch=0;   // the initial value of ch is 0
    for(char *p = str ;*p!='\0';p++){   //if we have a low character
        if(*p>='a'&&*p<='z'){   //the values of ch will increase
            ch++;
        }
    }
    return ch;
}
 
int main(){
    char str[50];   // we could also use char *str=malloc(50);
    while(*str != '\n'){    //we enter a condition that stops the loop
            printf("write a sentence:\n");
            fgets(str,sizeof(str),stdin);
            if (*str!='\0')
              {
                printf("the number of lowercase characters in that string is: %d\n",count_lower(str));
            }
    }
    return 0;
}

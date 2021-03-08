/*
CH-230-A
a8 p8.c
Badr Esseiany
besseiany@jacobs-university.de
*/

#include <stdio.h>
int wcount(char ch);
int main(int argc, const char * argv[]) {
    char fname[50];
 
    FILE *f;
    printf("enter file name:\n"); //text1.txt as example
    scanf("%s", fname);
    f = fopen(fname, "r");
    char c = fgetc(f);
    char ch=c;
    int i = 0;
    while (c != EOF){
        if(wcount(c) && !wcount(ch)){
            i++;
        }
        ch = c;
        c = fgetc(f);
 
    }
    printf("the file contains %d words.\n", i);
    return 0;
}
 
int wcount(char c){
    char arr[8] = "\n .\t,?!\r";
    for (int i = 0; i < 8; i++){
        if (arr[i] == c){ return 1;}
    }
    return 0;
}
/*
CH-230-A
a8 p7.c
Badr Esseiany
besseiany@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // file declarations
 
    FILE* fp1, *fp2, *d;
    fp1 = fopen("text1.txt", "r");
    fp2 = fopen("text2.txt", "r");
    d = fopen("merge12.txt", "w");
    if(fp1 == NULL || fp2 == NULL || d == NULL){
        printf("error allocating memory");
        exit(1);
        }
 
    char c[500];
    //prints characters to newfile
    while (fgets(c, 500, fp1) != NULL){
        fprintf(d, "%s", c);
    }
    while (fgets(c, 500, fp2) != NULL){
        fprintf(d, "%s", c);
    }
 
    fclose(fp1);
    fclose(fp2);
    fclose(d);
    return 0;
}

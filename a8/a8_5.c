/*
CH-230-A
a8_p5
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, const char * argv[]) {
    FILE* fptr, *d;
    fptr = fopen("chars.txt", "r");
    if (fptr == NULL) {
            printf("error getting file");
            exit(1);
            }
    int x =(int)  getc(fptr);//get a from chars.txt
    int y = (int) getc(fptr);//get b from chars.txt
    int sum = x + y;
    d = fopen("codesum.txt", "w");
    if (d == NULL) {
            exit(1);
    }
 
    fprintf(d, "%d", sum); //print the sum in codesum.txt
    fclose (fptr) ;
    return 0;
}
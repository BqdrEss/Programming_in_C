/*
CH-230-A
a3_p7
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
void print_form(int n, int m, char c){
    for ( int row = 1 ; row <= n ; row++ )
    {
        for(int column = 1 ; column <= m ; column++ ){
            printf("%c",c);
        }
        printf("\n");
        m++; 
    }
}
int main(){
    int n,m;
    char c;
    scanf("%d",&n);
    scanf("%d",&m);
    getchar();
    scanf("%c",&c);
    print_form(n,m,c);
    printf("\n");
    return 0;
}

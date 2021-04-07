/*
CH-230-A
a5 p8.c
Badr Essefiany
b.essefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ** matrix_1;
int ** matrix_2;
int ** matrix_3;
 
void input (int a, int b, int k)
{
    int x,y;
    matrix_1 = (int**) malloc(sizeof(int*)*a);
    for (x=0; x<a; x++)
        matrix_1[x]= (int*) malloc(sizeof(int*)*b);
    for (x=0; x<a; x++)
        for (y=0; y<b; y++)
            scanf ("%d", &matrix_1 [x][y]);
    matrix_2 = (int**) malloc(sizeof(int*)*b);
    for (x=0; x<b; x++)
        matrix_2[x]= (int*) malloc(sizeof(int*)*k);
    for (x=0;x<b;x++)
    {  for (y=0; y<k; y++)
            scanf ("%d",&matrix_2 [x][y]);
    }
    }
 
void multi (int a, int b, int k)
{
    int x,y,z;
    matrix_3 = (int**) malloc(sizeof(int*)*a);
    for (x=0; x<a; x++)
        matrix_3[x]= (int*) malloc(sizeof(int*)*k);
    for (x=0; x<a; x++)
    {
        for (y=0; y<k; y++)
        {
            matrix_3[x][y]=0;
            for (z=0; z<b; z++)
            {
                matrix_3[x][y]=matrix_3[x][y]+(matrix_1[x][z]*matrix_2[z][y]);
            }
 
        }
    }
}
 
 void output (int a, int b, int k)
{
    int x,y;
 
    printf ("Matrix A:\n");
    for (x=0; x<a; x++)
    {
        for (y=0; y<b; y++)
            printf ("%d ",matrix_1[x][y]);
        printf ("\n");
    }
    printf ("Matrix B:\n");
    for (x=0; x<b; x++)
    {
        for (y=0; y<k; y++)
            printf ("%d ",matrix_2[x][y]);
        printf ("\n");
    }
    printf ("The multiplication result AxB:\n");
    multi (a, b, k);
    for (x=0; x<a; x++)
    {
        for (y=0; y<k; y++)
            printf ("%d ",matrix_3[x][y]);
        printf ("\n");
    }
}
 
 
void dop(int a, int b, int k)
{
    int x,y;
 
    printf ("Matrix A:\n");
    for (x=0; x<a; x++)
    {
        for (y=0; y<b; y++)
            printf ("%d ",matrix_1[x][y]);
        printf ("\n");
    }
    printf ("Matrix B:\n");
    for (x=0; x<b; x++)
    {
        for (y=0; y<k; y++)
            printf ("%d ",matrix_2[x][y]);
        printf ("\n");
    }
    printf ("The multiplication result AxB:\n");
    multi (a, b, k);
    for (x=0; x<a; x++)
    {
        for (y=0; y<k; y++)
            printf ("%d ",matrix_3[x][y]);
        printf ("\n");
    }
}
 
int main()
{
    int a,b,k;
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&k);
    input(a, b, k);
    dop(a, b, k);
    free (matrix_1);
    free (matrix_2);
    free (matrix_3);
    return 0;
}

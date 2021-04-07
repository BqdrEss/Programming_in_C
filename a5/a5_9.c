/*
CH-230-A
a5 p9.c
Badr Essefiany
b.essefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
 
    int ***array = (int***)malloc(a*sizeof(int**));
    int x, y, z;
    for (x = 0; x < a; x++)
      {
          array[x] = (int**)malloc(b*sizeof(int*));
          for (y = 0; y < b; y++)
           {
        array[x][y] = (int*)malloc(c*sizeof(int));
          }
     }
 
    for (x=0;x<a;x++)
 
    {for (y=0;y<b;y++)
        {for (z=0;z<c;z++)
            {scanf ("%d",&array[x][y][z]);
            }
        }
 
    }
 
    for (z=0;z<c;z++)
    {
        z=z+1;
        printf ("Section %d:\n",z);
             for (x=0;x<a;x++)
             {
                 for (y=0;y<b;y++)
                 printf ("%d ",array[x][y][z]);
                 printf ("\n");
             }
    }
      return 0;
}

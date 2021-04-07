/*
CH-230-A
a2 p3
Badr Essefiany
Bessefiany@jacobs-university.de
*/
 #include <stdio.h>
int main()
{
    int w,d,h;
    scanf("%d",&w);// we assign w to weeks
    scanf("%d",&d);// we assign d to days
    scanf("%d",&h);// we assign h to hours
    int s= (7*24)*w + 24*d + h ;
    printf ("the total number of hours is:%d",s);  // the printed number
                                                 //is gonna be the sum in hours.
    return 0;
}
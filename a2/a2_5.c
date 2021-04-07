/*
CH-230-A
a2_p5.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
int main()
{
    int a;
        scanf("%d",&a);
            printf("%d\n",a);
    int*ptr;
        ptr=&a;
            printf("the address is %u ",&a);
    *ptr= *ptr+5;
    printf("the value is %d ",a);
    printf("the address is %d ",ptr);
return 0;
}
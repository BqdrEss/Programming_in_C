#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    int*ptr;
    ptr=&a;
    printf("the address is %p \n",&a);
    *ptr= *ptr+5;
    printf("the value is %d \n",a);
    printf("the address is %p \n",ptr);
return 0;
}

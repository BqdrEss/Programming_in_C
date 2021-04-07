/*
CH-230-A
a7_p7.c
Badr Essefiany
b.essefiany@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
 
int main(int argc, char** argv) {
    Stack* my_stack;
    my_stack = (Stack*)malloc(sizeof(Stack));
    if (my_stack == NULL) {exit(1);}
    my_stack->count = 0; //start off with empty stack
    char c;
    int n;
 
    while (1) {
        scanf("%c", &c);
        switch (c)
        {
            case 's':
                scanf("%d", &n);
                push(n, my_stack);
                break;
            case 'p':
                my_stack = pop(my_stack);
                break;
            case 'e':
                empty(my_stack);
                break;
            case 'q':
                printf("Quit\n");
                exit(1);
                break;
        }
    }
    return 0;
 
}

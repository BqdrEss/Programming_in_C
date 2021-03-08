/*
CH-230-A
a8_p4
Badr Essefiany
Bessefiany@jacobs-university.de
*/

#include <stdio.h>
#include "stack.h"
 
Stack* pop(Stack* my_list) {
    if (my_list->count > 0) {
        my_list->count = my_list->count -1;
        printf("Popping %d\n", my_list->array[my_list->count]);
    }
    else {
        printf("Popping Stack Underflow\n");
    }
    return my_list;
}
void push(int i, Stack* my_list) {
    if (my_list->count < 12) {
        //printf("Pushing %d\n", i);
        my_list->array[my_list->count] = i;
        my_list->count = my_list->count + 1;
    }
    else{
        printf("Pushing Stack Overflow\n");
    }
}
 
 
void isEmpty(Stack* my_list) {
    if (my_list->count == 0) {
        printf("The stack is empty\n");
    }
}
 
void isFull(Stack* my_list) {
    if (my_list->count == 12) {
        printf("The stack is full\n");
    }
}
 
void empty(Stack* my_list) {
    printf("Emptying Stack ");
    while (my_list->count > 0) {
        my_list->count = my_list->count -1;
        printf("%d ", my_list->array[my_list->count]);
    }
    printf("\n");
}
 
void printstack_bin(Stack* my_list){
    for (int i = my_list->count-1; i >= 0; i--){
        printf("%d", my_list->array[i]);
    }
    printf("\n");
 
 
}

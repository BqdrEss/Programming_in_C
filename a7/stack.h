#ifndef _STACK_H
#define _STACK_H
 
struct stack {
    unsigned int count;
    int array[12]; // Container
};
typedef struct stack Stack;
 
Stack* pop(Stack* my_list);
void push(int item, Stack* my_list);
void isFull(Stack* my_list);
void empty(Stack* my_list);
void isEmpty(Stack* my_list);
#endif
#include "a7_1.h"
#include <stdio.h>
#include <stdlib.h>
 
struct list* push_front(struct list *my_list, int n){/*insert a value at the end */
    struct list *newel;
    newel = (struct list *)malloc(sizeof(struct list));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel -> value = n ;
    newel -> next = my_list ;
    my_list=newel;
    return my_list ;
}
struct list * push_back ( struct list * my_list , int n ) {/*insert a value in the front of a list*/
 struct list * cursor , * newel ;
    cursor = my_list ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel -> value = n ;
    newel -> next = NULL ;
    if ( my_list == NULL ){
        return newel ;
    }
    while ( cursor -> next != NULL ){
        cursor = cursor -> next ;
        cursor -> next = newel ;
        break;
    }
        return my_list ;
}
struct list *remov(struct list *my_list){/*remove an element from the list*/
    if(my_list != NULL)
    {
        struct list *ptr = my_list->next;
        free(my_list);
        my_list = ptr;
    }
    return my_list;
}
void print_list(struct list *my_list) {/*print the linked list*/
    while ( my_list != NULL ) {
    printf ("%d " , my_list -> value );
    my_list = my_list -> next ;
    }
    printf("\n");
}
void freelis(struct list* my_list){/*free memory*/
    struct list *nextelem;
    while (my_list != NULL)
    {
        nextelem = my_list ->next;
        free(my_list);
        my_list = nextelem;
    }
}

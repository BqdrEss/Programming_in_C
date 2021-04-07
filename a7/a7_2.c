/*
CH-230-A
a7_p2.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
struct list {// we declare the list
    struct list *prev;
    char value;
    struct list *next;
  };
typedef struct list List;
char c;
List* push_front(List *my_list, char c);/*function for '1' */
List * remov(List *my_list,char c);/*function for '2' */
void print_list(List *my_list);/*function for '3' */
void print_back_list(List *my_list);/*function for '4' */
void freelis(List* my_list);/*function for '5' */
int main(){
  int n;
  List *my_list=NULL;
  while(1){
     scanf("%d",&n);
     switch (n){// we use a switch for of the cases of the entered char
     case 1:  // and we simply call the function in each of the cases
            printf("enter a char: ");
            scanf("%c",&c);
            getchar();
            my_list=push_front(my_list,c);
              break;
      case 2:
            scanf("%c",&c);
            getchar();
            my_list=remov(my_list,c);
              break;
      case 3:
            print_list(my_list);
              break;
      case 4:
            print_back_list(my_list);
              break;
      case 5:
            freelis(my_list);
             return 0;
              break;
      }/*end of switch*/
  }/*end of loop*/
  return 0;
}
 
List* push_front(List *my_list, char c){/*insert a value at the end */
   if (my_list==NULL)
        return my_list;
 
    struct list *newel=my_list;
 
    if (c == my_list -> value)
       my_list = my_list -> next;
    free(newel);
    printf("value: %c",my_list -> value);
    return my_list;
}
List *remov(List *my_list, char c){/*remove an element from the list*/
    int idx=0;
    while (my_list!=NULL){
        if(my_list->value == c)
        {
            List *ptr=my_list;
            my_list=my_list->next;
            free(ptr);
            idx++;
            /*List *ptr = my_list->next;
            free(my_list);
            my_list = ptr;*/
        }
    }
    if(idx==0){
       printf("The element is not in the list!\n");
    }
    return my_list;
}
void print_list(List *my_list) {/*print the linked list*/
    List *newel = my_list;
    while ( newel != NULL ) {
    printf ("%c " , newel -> value );
    newel = newel -> next ;
    }
    printf("\n");
}
void print_back_list(List* my_list) {
    List *newel = my_list;
    if(newel == NULL) return; // empty list, exit
    // Going to last Node
    while(newel->next != NULL) {
        newel = newel->next;
    }
    // Traversing backward using prev pointer
    while(newel != NULL) {
        printf("%c ",newel->value);
        newel = newel->prev;
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

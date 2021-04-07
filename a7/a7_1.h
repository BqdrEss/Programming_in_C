#ifndef LINKED_LIST_H  
#define LINKED_LIST_H 
struct list {// we declare the list
  int value;
  struct list *next;
  };
struct list* push_front(struct list *my_list, int n);/*function for 'b' */
struct list* push_back(struct list *my_list, int n);/*function for 'a' */
struct list * remov(struct list *my_list);/*function for 'r' */
void print_list(struct list *my_list);/*function for 'p' */
void freelis(struct list* my_list);/*function for 'q' */
 
#endif

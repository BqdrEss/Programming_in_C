/*
CH-230-A
a7_p1.c
Badr Essefiany
Bessefiany@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "a7_1.h"
int main(){
  char c;
  int n;
  struct list *my_list=NULL;
  while(1){
     scanf("%c",&c);
     switch (c){// we use a switch for of the cases of the entered char
     case 'a':  // and we simply call the function in each of the cases
        scanf("%d",&n);
        my_list=push_back(my_list,n);
              break;
      case 'b':
            scanf("%d",&n);
            my_list=push_front(my_list,n);
              break;
      case 'p':
                print_list(my_list);
              break;
      case 'r':
            my_list=remov(my_list);
              break;
      case 'q':
            freelis(my_list);
            return 0;
              break;
      }/*end of switch*/
  }/*end of loop*/
  return 0;
}

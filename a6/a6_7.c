/*
CH-230-A
a6 p7.c Badr Essefiany
bessefiany@jacobs-university.de
*/
#include <stdio.h>
 
void printbin(unsigned char c){
  int MASK = 128;//MASK=10000000
  while(MASK>0){
    if ((c & MASK)== 0){//we print 0 if the compared element from c is a 0
      printf("0");
    }
    else{
      printf("1");
    }
    MASK >>= 1 ;//we shift mask
  }
  printf("\n");
}
void set3bits(unsigned char c,int m,int n,int p){
  c|=1 << m;//we compare c or 0x01 shit by m
  c|=1 << n;//we compare c or 0x01 shit by n
  c|=1 << p;//we compare c or 0x01 shit by p
  printbin(c);//we print the bits
}
int main(){
  unsigned char c;
  int m,n,p;
  scanf("%c",&c);
  getchar();
  scanf("%d %d %d",&m,&n,&p);
  printf("The decimal representation is: %d\n",(int)c);
  printf("The binary representation is: ");
  printbin(c);
  printf("After setting the bits: ");
  set3bits(c,m,n,p);
  return 0;
}

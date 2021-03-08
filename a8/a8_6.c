#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *f_r1;
FILE *f_r2;
FILE *f_w;
char A[20];
char B[20];
double x=0.0,y=0.0;
printf("enter file name:\n"); //test1.txt as example
scanf("%s",A);
printf("enter file name:\n"); //test2.txt as example
scanf("%s",B);
f_r1=fopen(A,"r");
if (f_r1 == NULL) {
    printf("error getting file");
    exit(1);
}
fscanf(f_r1,"%lf",&x);
f_r2=fopen(B,"r");
if (f_r2==NULL) 
if (f_r2 == NULL) {
    printf("error getting file");
    exit(1);
}
fscanf(f_r2,"%lf",&y);
f_w=fopen("result.txt","w");
if (f_w == NULL) {
    printf("error getting file");
    exit(1);
}
fprintf(f_w,"sum is %lf\n",x+y);
fprintf(f_w,"difference is %lf\n",x-y);
fprintf(f_w,"division is %lf\n",x/y);
fprintf(f_w,"product is %lf\n",x*y);
fclose(f_r1);
fclose(f_r2);
fclose(f_w);
return 0;
}
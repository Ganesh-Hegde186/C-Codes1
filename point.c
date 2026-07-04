#include<stdio.h>
#include<stdlib.h>
int main(void){
int *x;
int *y;
x=malloc(sizeof(int));
*x=45;
y=x;
*y=56;
printf("%i\n",*x);
printf("%i\n",*y);
free(x);
return 0;
}

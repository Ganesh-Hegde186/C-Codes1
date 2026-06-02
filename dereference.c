#include<stdio.h>
#include<stdlib.h>
int main(){
int *x;
int *y;
x=malloc(sizeof(int));
*x=34;
y=x;
*y=45;
printf("%d\n", *x);
printf("%d\n", *y);
free(x);
return 0;
}

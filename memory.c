#include<stdio.h>
int main(void){
int p = 20;
int *q= &p;
printf("%i\n",p);
printf("%p\n",&p);
printf("%i\n",*q);
printf("%p\n",q);
printf("%p\n",&q);
return 0;
}


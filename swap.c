#include<stdio.h>
int swap(int *a,int *b);
int main(void){
int x=1;
int y=2;
printf("x = %i and y = %i \n",x,y);
swap(&x,&y);
printf("x = %i and y = %i \n",x,y);
return 0;
}
int swap(int *a,int *b){
int temp= *a;
*a=*b;
*b=temp;
}  

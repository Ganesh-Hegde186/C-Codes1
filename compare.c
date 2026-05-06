#include<stdio.h>
int main(void){
int a,b;
printf("Enter the 1st number:");
scanf("%d",&a);
printf("Enter the 2nd number:");
scanf("%d",&b);
if(a>b){
printf("a is greater than b\n");
}
else if(a<b){
printf("b is greater than a\n");
}
else{
printf("a equals to b\n");
}
}

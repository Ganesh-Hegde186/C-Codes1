#include<stdio.h>
int main(){
int n;
printf("Enter your choice:");
scanf("%d",&n);
switch(n){
case 1 :printf("Your Choice is 1\n");
break;
case 2 :printf("Your Choice is 2\n");
break;
default:printf("Invalid Choice\n");
break;
}
return 0;
}

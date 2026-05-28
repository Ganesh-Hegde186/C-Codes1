#include<stdio.h>
int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0){
if(n<0){
break;
}
printf("Enter the number:");
scanf("%d",&n);
}
return 0;
}

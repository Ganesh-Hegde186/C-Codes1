#include<stdio.h>
int sqt(int m);
int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Suqre root of number is:%d\n",sqt(n));
return 0;
} 
int sqt(int m){
return m*m;
}

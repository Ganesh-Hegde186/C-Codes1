#include<stdio.h>
#include<stdbool.h>
int main(void){
int n;
printf("Enter the n value:");
scanf("%i",&n);
bool prime[n+1];
for(int i=0;i<=n;i++){
prime[i]=true;
}
prime[0]=false;
prime[1]=false;
for(int i=2;i*i<=n;i++){
if(prime[i]){
for(int j=i*i;j<=n;j+=i){
prime[j]=false;
}
}
}
printf("Prime numbers up to %i are\n:",n);
for(int i=2;i<=n;i++){
if(prime[i]){
printf("%i\n",i);
}
}
return 0;
}

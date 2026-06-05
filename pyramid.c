#include<stdio.h>
void pyramid(int a);
int main(void){
int n;
printf("Enter the number of rows:");
scanf("%i",&n);
pyramid(n);
return 0;
}
void pyramid(int a){
for(int i=1;i<=a;i++){
for(int j=1;j<=a-i;j++){
printf(" ");
}
for(int k=1;k<=2*i-1;k++){
printf("*");
}
printf("\n");
}
}


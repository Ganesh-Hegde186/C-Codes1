#include<stdio.h>
int main(void){
int n=3;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int b[3][3]={{2,3,4},{5,6,7},{8,9,1}};
int c[3][3]={0};
printf("Matrix Multiplication:\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
c[i][j]=0;
for(int k=0;k<n;k++){
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d ",c[i][j]);
}
printf("\n");
}
return 0;
}


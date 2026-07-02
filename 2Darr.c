#include<stdio.h>
#include<ctype.h>
int main(void){
int arr[2][3];
printf("Enter The elements:\n");
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
printf("Enter the element:");
scanf("%d",&arr[i][j]);
}
}
printf("The inserted elements are:\n");
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
printf("%d\n",arr[i][j]);
}}
printf("Address of each element:\n");
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
printf("%p\n",(void*)&arr[i][j]);
}
}
printf("size of the array is:%zu\n",sizeof(arr));
printf("Total Elements in the array is:%zu\n",sizeof(arr)/sizeof(arr[1][2]));
return 0;
}

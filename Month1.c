#include<stdio.h>
int sum(int *array,int p);
int main(void){
int n;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("Enter the %d element:",i);
scanf("%d",&arr[i]);
}
printf("Elements of the array is:\n");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
printf("Sum of the array is:%d\n",sum(arr,n));
for(int i=0;i<n;i++){
printf("%p\n",&arr[i]);
}
return 0;
} 
int sum(int *array,int p){
int s=0;
for(int i=0;i<p;i++){
s = s + *(array+i);
}
return s;
}


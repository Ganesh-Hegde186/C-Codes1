#include<stdio.h>
#include<ctype.h>
int sum(int *array,int p);
float avg(int *ar,int x);
int main(void){
int arr[5]={10,20,30};
printf("Size of the array element is:%zu\n",sizeof(arr[0]));
printf("Size of arr is:%zu\n",sizeof(arr));
printf("Number of Elements:%zu\n",sizeof(arr)/sizeof(arr[0]));
for(int i=0;i<5;i++){
printf("%i\n",arr[i]);
}
for(int i=0;i<5;i++){
printf("%p\n",(void*)&arr[i]);
}
int n= sizeof(arr)/sizeof(arr[0]);
printf("Sum of array is:%d\n",sum(arr,n));
printf("Avearge of array is:%f\n",avg(arr,n));
return 0;
}
int sum(int *array,int p){
int s=0;
for(int i=0;i<p;i++){
s=s + *(array+i);
}
return s;
}
float avg(int *ar,int x){
float a=0;
float b=0;
for(int i=0;i<x;i++){
a = a + *(ar+i);
}
b= a/x;
return b;
}

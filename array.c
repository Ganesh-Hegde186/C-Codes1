#include<stdio.h>
#include<ctype.h>
int main(void){
const int N=5;
int arr[N]={10,20,30};
printf("%i %i %i %i\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
printf("Size of the array is:%zu\n",sizeof(arr[0]));
printf("Size of arr is:%zu\n",sizeof(arr));
printf("%zu\n",sizeof(arr)/sizeof(arr[0]));
for(int i=0;i<N;i++){
printf("%i ",arr[i]);
}
return 0;
}

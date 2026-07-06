#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int *TwoSum(int *Nums,int t,int NumsSize,int *ReturnSize);
int main(void){
int nums[]={7,2,11,12};
int target=9;
int returnSize;
int numsSize=sizeof(nums)/sizeof(nums[0]);
int *result=TwoSum(nums,target,numsSize,&returnSize);
for(int i=0;i<returnSize;i++){
printf("%d ",result[i]);
}
printf("\n");
free(result);
return 0;
}
int *TwoSum(int *Nums,int t,int NumsSize,int *ReturnSize){
int *a=malloc(sizeof(int)*2);
*ReturnSize=2;
for(int i=0;i<NumsSize;i++){
for(int j=i+1;j<NumsSize;j++){
if(Nums[i]+Nums[j]==t){
a[0]=i;
a[1]=j;
return a;
}
}
}

}


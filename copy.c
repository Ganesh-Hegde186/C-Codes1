#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(void){
char* p=malloc(100);
printf("Enter the String:");
scanf("%s",p);
char* q = malloc(sizeof(p));
int n=strlen(p);
for(int i=0;i<=n;i++){
q[i]=p[i];
}

q[0]=toupper(q[0]);
printf("%s\n",p);
printf("%s\n",q);
printf("%p\n",p);
printf("%p\n",q);
printf("%zu\n",sizeof(q));
printf("%zu\n",sizeof(q));
free(q);
free(p);
return 0;
}


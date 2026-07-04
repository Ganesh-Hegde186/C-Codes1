#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(void){
char *s=malloc(100);
printf("Enter the string:");
scanf("%s",s);
char *t = malloc(strlen(s)+1);
int n= strlen(s);
for(int i=0;i<=n;i++){
t[i]=s[i];
}
if(strlen(t)>0){
t[0]=toupper(t[0]);
}
printf("%s\n",s);
printf("%s\n",t);

free(t);
free(s);
return 0;
}

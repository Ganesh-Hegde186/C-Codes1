#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *strrev(char *str);
int main(void){
char s[]="hello";
char b[]="Ganesh,20,Sirsi";
char *name=strtok(b,",");
char *age=strtok(NULL,",");
char *city=strtok(NULL,",");
printf("%s\n",name);
printf("%s\n",age);
printf("%s\n",city);
char result[100];
char n[]="ganesh";
int m=95;
sprintf(result,"Name:%s Marks:%d",n,m);
printf("%s\n",result);
char p[]="25";
int y=atoi(p);
printf("%d\n",y);
int x;
sscanf(p,"%d",&x);
printf("%d\n",x);
int q=56;
char z[25];
sprintf(z,"%d",q);
printf("%s\n",z);
printf("Reverse the string: %s\n", strrev(s));

return 0;
}
char *strrev(char *str){
int n=strlen(str);
for(int i=0;i<n/2;i++){
char tmp=str[i];
str[i]=str[n-i-1];
str[n-i-1]=tmp;
}
return str;
}


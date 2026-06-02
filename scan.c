#include<stdio.h>
#include<stdlib.h>
int main(void){
char *s =malloc(100);
printf("Enter the String:");
scanf("%s",s);
 printf("String is %s\n",s);
free(s);
return 0;
}

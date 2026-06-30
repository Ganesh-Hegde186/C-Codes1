#include<stdio.h>
#include<string.h>
int main(void){
char c[100];
printf("Enter the string:");
scanf("%s",c);
char d[100];
char s[100];
printf("Enter the String:");
scanf("%s",d);
printf("The First string is: %s\n",c);
printf("The Second string is: %s\n",d);
printf("The length of the string is: %zu\n",strlen(c));
printf("The length of the string is: %zu\n",strlen(d));
printf("The Copy of the First string in s is: %s\n",strcpy(s,c));
printf("The concatenation is :%s\n",strcat(c,d));
printf("Comparison of 2 String is: %d \n",strcmp(c,d)); 
return 0;
}

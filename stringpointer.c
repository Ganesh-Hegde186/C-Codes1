#include<stdio.h>
#include<string.h>
int main(void)
{
    char *s ;
    printf("Enter the String:");
scanf("%s",s);
    char *t=s;
    printf("%p\n", (void*)s);

    printf("%p\n", (void*)&s[0]);
    printf("%p\n", (void*)&s[1]);
    printf("%p\n", (void*)&s[2]);
    printf("%p\n", (void*)&s[3]);

    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[3]);
if(strcmp(s,t)==0){
printf("Strings are Equal\n");
}
else{
printf("Strings are not equal\n");
}

    return 0;
}

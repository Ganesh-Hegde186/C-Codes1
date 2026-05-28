
#include <stdio.h>

int main(void) {
int n;
long int b;
float p;
long double s;
char q;

    char name[67];
    printf("What's your name? ");
    scanf("%s",name);
    printf("hello, %s\n", name);
printf("Size of n is:%lu\n",sizeof(n));
printf("Size of p is:%lu\n",sizeof(p));
printf("Size of s is:%lu\n",sizeof(s));
printf("Size of b is:%lu\n",sizeof(b));
printf("Size of q is:%lu\n",sizeof(q));
printf("Size of name is:%lu\n",sizeof(name));
printf("%d\n",printf("Hello World\n"));
printf("%d\n",printf("%s","Hello World\n"));


return 0;
}

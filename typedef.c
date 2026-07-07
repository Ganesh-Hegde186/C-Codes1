#include<stdio.h>
#include<string.h>
typedef struct{
char *title;
char *author;
int price;
}Book;
typedef struct{
char name[20];
int age;
float cgpa;
}Student;
int main(void){
Student S1;
Book B[2];
B[1].title="typedef struct";
B[1].author="Ganesh";
B[1].price=230;
printf("%s ,%s ,%d\n",B[1].title,B[1].author,B[1].price);
strcpy(S1.name,"Ganesh");
S1.age=20;
S1.cgpa=8.5;
printf("%s ,%d ,%.2f\n",S1.name,S1.age,S1.cgpa);
return 0;
}

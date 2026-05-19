#include<stdio.h>
int main(void){
char c;
printf("Enter the character 'y' or 'n' ");
scanf("%c",&c);
if(c=='y' || c=='Y'){
printf("Agreed! \n");
}
else if(c=='n' || c=='N'){
printf("Not agreed..\n ");
}
else{
printf("Enter a valid character.....\n");
}
}


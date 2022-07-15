#include<stdio.h>
int main(){
int n,x,n1;
printf("Enter a number ");
scanf("%d",&n);
printf("Enter a digit which you want to append");
scanf("%d",&n1);
x=n*10+n1;
printf("The number becomes %d",x);

return 0;
}
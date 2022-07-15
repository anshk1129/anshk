#include<stdio.h>
int main(){
int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("value before swap  a=%d and b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nvalue after swap  a=%d and b=%d",a,b);
return 0;
}
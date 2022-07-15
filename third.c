#include<stdio.h>
int main(){
int a,b,temp;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("value before swap  a=%d and b=%d:",a,b);
temp=a;
a=b;
b=temp;
printf("\nvalue after swap  a=%d and b=%d:",a,b);
return 0;
}
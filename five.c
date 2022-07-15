#include<stdio.h>
int main(){
    int n,a,b,c,d;
printf("enter a three digit number");
scanf("%d",&n);
a=n%10;
b=n/10;
c=b%10;
d=b/10;


// c=n%1000;
printf("the result is %d",a+c+d);


return 0;
}
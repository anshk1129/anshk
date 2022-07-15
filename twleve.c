#include<stdio.h>
int main(){
int n;
float x;
printf("Enter  money in indian currency  ");
scanf("%d",&n);
x=n/76.33;
printf("The amount you have entered in indian rupees is eqaul to %f in usd",x);
return 0;
}
//ganesh-192011430//
#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0){
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
}
if(temp==sum)
 
printf("the num is armstrong number");
else
printf("the num is not armstrong number");
}

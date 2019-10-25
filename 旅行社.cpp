#include<stdio.h>
int main(){
	int total,English,Russian,neither,both;
	printf("total is : "); 
	scanf("%d",&total);
	printf("English is : "); 
	scanf("%d",&English);
	printf("Russian is : "); 
	scanf("%d",&Russian);
	printf("neither is : "); 
	scanf("%d",&neither);
	both=English + Russian -(total -neither);
	if (both<0)  printf("Input Error,Couldn't Calculate");
	else printf("the both is %d",both);
	
	
	
	
} 

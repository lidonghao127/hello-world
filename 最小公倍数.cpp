#include <stdio.h>

int main() 
{
	
int a, b, c, m, n, x=10;
	printf("输入m和n:  ");
	scanf("%d %d", &m,&n);
	a = m;
	b = n;
	while(a!=b){
if(a>b)
a=a-b;
else b=b-a;
}

if(a==1)
{printf("最小公倍数为 %d",m*n);}
else {
printf("最小公倍数为%d",m*n/a);
}
return 0;
}

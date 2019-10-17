#include <stdio.h>

int main() 
{
	
int a, b, c, m, n, x=10;
	printf("input m,n:  ");
	scanf("%d %d", &m,&n);
	a = m;
	b = n;
	while(a!=b){
if(a>b)
a=a-b;
else b=b-a;
}

if(a==1)
{printf("The least common multiple is %d",m*n);}
else {
printf("The least common multiple is %d",m*n/a);
}
return 0;
}

//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int n,p,q,count=1,i,j,k;
	bool ju=true;
	for(n=2;ju;n++)
	{
		p=n;
		for(q=0;p!=0;q++)
		{
			p=p/10;
		}
		p=n;
		for(i=0;i<q;i++)
		{
			j=p%10;
			if(j==1)
				count++;
			p=p/10;
		}
		if(n==count)
			ju=false;
	}
	printf("%d",count);
	return 0;
} 

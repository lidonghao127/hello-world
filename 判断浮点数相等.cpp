#include <stdio.h>

int main() 
{
	
float m,x,y,a,b;
 scanf("%f %f %f",&m,&x,&y);//for example 1.78 1.779999 2 
 a=m/y,b=x/y;
 a=(int)(a*100000+0.5)/100000;
 b=(int)(b*100000)/100000;
 if(a==b){
   printf("equal");
}
  else printf("not equal");
return 0;
}


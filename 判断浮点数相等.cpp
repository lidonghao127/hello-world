#include <stdio.h>

int main() 
{
	
float m,x,y,a,b;
 scanf("%f %f %f",&m,&x,&y);//for example 1.78 1.779999 2 
 a=m/y,b=x/y;

 if(a-b<0.00001 && a-b>-0.00001){
   printf("equal");
}
  else printf("not equal");
return 0;
}

#include<stdio.h>
#include<math.h>
int a(int b){
	int k=0;
	for(int j=2;j<=b;j++){
		if(b%j==0) k++;
	}
	if(k==1) return 1;
	else return 0;
}
int c(int d){
	int e=1,p,m,sum=0,sum1=0,h=0;
	int t[100];
	p=d;
	for(e=0;p!=0;e++){
			p=p/10;	
		}
	for(m=0;m<e;m++){
			t[m]=(d-h)/pow(10,e-m-1);
			h=h+t[m]*pow(10,e-m-1);		
	}
	for(int z=0;z<e;z++){
		sum=sum+t[z];
	}
	for(int x=0;x<e;x++){
		sum1=sum1+pow(t[x],2);
	}
	if(a(sum)==1&&a(sum1)==1) return 1;
	else return 0;
	
}
int main(){
	int i,sh[10000],v=0,sum2=0;
	for(i=100;i<10001;i++){
		if(a(i)==1&&c(i)==1) {
		  printf("%d\n",i);
		  sh[v]=i;
		  v++;
		}	
	}
	for(int g=0;g<v;g++){
		sum2=sum2+sh[g];
	}
	printf("%d\n",sum2/v);
}

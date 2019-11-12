#include<stdio.h>
int main(){
    int a[5],i,j,k,l,m,n,t,u=0,q,h=0,o=0,w[200];
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(int c=0;c<4;c++) {
        for(int b=0;b<4-c;b++){
            if(a[b]<a[b+1])
            {
                q=a[b];
                a[b]=a[b+1];
                a[b+1]=q;
            }
        }


    }
    for(i=0;i<5;i++)
        printf("%d",a[i]);

    for(j=0;j<5;j++){
        for(k=0;k<5;k++){
            for(l=0;l<5;l++){
                for(m=0;m<5;m++){
                    for(n=0;n<5;n++){
                        if(a[j]!=a[k]&&a[j]!=a[l]&&a[j]!=a[m]&&a[j]!=a[n]&&a[k]!=a[l]&&a[k]!=a[m]&&a[k]!=a[n]&&a[l]!=a[m]&&a[l]!=a[n]&&a[m]!=a[n]){
                            t=a[j]*10000+a[k]*1000+a[l]*100+a[m]*10+a[n];
                            w[o]=t;
                            o++;}

                    }

                }
            }
        }
    }
    for (i=0;i<120;i++){
        h=0;
        for(int p=2;p<w[i];p++){
            if(w[i]%p==0){
                h++;
                // 素数个数加1
            }
        }
        if (h!=0){u=u+1;}


        if(h==0){
            printf("\n%d",w[i]);
            break;
        }



    }
    if(u==120) printf("\nError");

    return 0;
}
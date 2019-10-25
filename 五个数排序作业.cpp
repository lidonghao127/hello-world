//Ωªªª≈≈–Ú
#include <stdio.h>
int main() {
  int x[5], i,temp;
  
    scanf("%d %d %d %d %d", &x[0], &x[1], &x[2],&x[3],&x[4]);
    for(i=0;i<4;i++) {
      if( x[i] > x[i+1]) {
  	    temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;
      }

    }
    for(i=0;i<4;i++) {
      if( x[i] > x[i+1]) {
  	    temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;
      }

    }
        for(i=0;i<4;i++) {
      if( x[i] > x[i+1]) {
  	    temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;
      }

    }
            for(i=0;i<4;i++) {
      if( x[i] > x[i+1]) {
  	    temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;
      }

    }
    printf("%d%d%d%d%d", x[4], x[3], x[2],x[1],x[0]);
  
  return 0;
}


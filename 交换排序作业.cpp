//Ωªªª≈≈–Ú
#include <stdio.h>
int main() {
  int x[3] = {5, 2, 1}, i,temp;
  while(1) {
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(i=0;i<2;i++) {
      if( x[i] > x[i+1]) {
  	    temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;
      }

    }
    for(i=0;i<2;i++) {
      if( x[i] > x[i+1]) {
  	    temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;
      }

    }
    printf("%d, %d, %d\n", x[0], x[1], x[2]);
  }
  return 0;
}


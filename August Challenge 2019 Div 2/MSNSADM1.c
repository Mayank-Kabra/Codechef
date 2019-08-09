#include <stdio.h>

int main(void) {
    int i,j;
    int T,N,A[150],B[150],S,max=0;
	scanf("%d", &T);
	for(i=0;i<T;i++) {
	    max = 0;
	    scanf("%d",&N);
	    for(j=0; j<N;j++) {
	        scanf("%d",&A[j]);
	    }
	    for(j=0; j<N;j++) {
	        scanf("%d",&B[j]);
	    }
	    for(j=0; j<N;j++) {
	        S = ((A[j]*20)-(B[j]*10));
	        if(max < S)
	            max = S;
	    }
	    printf("%d\n",max);
	}
	return 0;
}

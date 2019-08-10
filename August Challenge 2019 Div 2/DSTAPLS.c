#include <stdio.h>

int main(void) {
	int T,i;
	long long int N,K,mul;
	scanf("%d",&T);
	for(i=0; i<T; i++) {
	    scanf("%lld",&N);
	    scanf("%lld",&K);
	    N = N/K;
	    if(N%K == 0)
	        printf("NO\n");
	    else
	        printf("YES\n");
	}
	return 0;
}

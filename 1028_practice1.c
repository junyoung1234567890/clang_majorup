#include <stdio.h>
int main(){
	int N,X;
	scanf("%d %d", &N, &X);
	int A[10001];
	for(int i=0;i<N;i++){
		scanf("%d ", &A[i]);
		if(A[i] < X) printf("%d ", A[i]);
	}
}
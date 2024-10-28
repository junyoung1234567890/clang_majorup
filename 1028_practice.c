#include <stdio.h>
int main(){
	int N,v;
	int t = 0;
	scanf("%d",&N);
	int a[N];
	for(int i = 0; i<N; i++){
		scanf("%d ", &a[i]);
	}
	scanf("%d", &v);
	for(int i = 0; i<N;i++){
		if(a[i] == v) t++; 
	}
	printf("%d", t);
}
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int s[10001];
	for(int i = 0; i<n;i++){
		scanf("%d", &s[i]);
	}
	int max = s[0];
	int min = s[0];
	for(int i=0;i<n;i++){
		if(max<s[i]) max = s[i];
		if(min>s[i]) min = s[i];
	}
	printf("%d %d", min, max);
}
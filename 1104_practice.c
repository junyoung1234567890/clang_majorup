#include <stdio.h>
int main() {
	int i;
	char s[1000];
	scanf("%s", s);
	scanf("%d", &i);
	printf("%c", s[i-1]);
}

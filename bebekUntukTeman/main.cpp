#include <cstdio>

int main () {
	int n, m, a, b;
	scanf("%d %d", &n, &m);
	a = n/m;
	b = n%m;
	
	printf("masing-masing %d\n", a);
	printf("bersisa %d", b);
}

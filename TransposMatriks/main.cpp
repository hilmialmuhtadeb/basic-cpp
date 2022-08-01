#include <cstdio>

int main () {
	int bil[9];
	
	for (int i=0; i<9; i++) {
		scanf("%d", &bil[i]);
	}
	
	for (int i=0; i<3; i++) {
		printf("%d %d %d\n", bil[i], bil[i+3], bil[i+6]);
	}
}

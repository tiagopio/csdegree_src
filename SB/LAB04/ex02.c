#include <stdio.h>

unsigned char rotate_left(unsigned char x, int n) {
	unsigned char tmp_num = 0;
	int pot = 7;
	for (int i = 0; i < n; i++) {
		if (x & (1 << pot)) {
			tmp_num |= (1 << pot);
		}
		pot--;
	}
	x <<= n;
	tmp_num >>= (8 - n);
	x |= tmp_num;
	return x;
}

int main() {
	printf("%0x\n", rotate_left(0x61, 1));
	printf("%0x\n", rotate_left(0x61, 2));
	printf("%0x\n", rotate_left(0x61, 7));
}
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main() {
	int a;
	scanf_s("%o", &a);
	printf("%d\n", a);
	printf("%x\n", a);
	printf("%x", a >> 4);
	printf("%x\n", a);
	printf("%x", ~a);
	int b;
	scanf_s("%x", &b);
	printf("%x", a & b);
	return 0;
}
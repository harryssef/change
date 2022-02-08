#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main() {
	float a;
	scanf_s("%f", &a);
	printf("%.2f", a);
	return 0;
}
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
int main() {
	int x;
	scanf_s("%d", &x);
	double z1 = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x - 1) * sqrt(pow(x, 2) - 9));
	printf("%.0f\n", z1);
	double z2 = sqrt((x + 3) / (x - 3));
	printf("%.0f", z2);
	return 0;
}
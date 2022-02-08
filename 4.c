#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define MIN_VALUE 21
#define MAX_VALUE 45
void main() {
	int x; 
	int result;
	scanf_s("%d", &x);
	result = MIN_VALUE <= x && x <= MAX_VALUE;
	printf("Number %d is inside range %d...%d: %s \n", x, MIN_VALUE, MAX_VALUE, result ? "yes" : "no"); 

	int b; 
	scanf_s("%d", &b);
	printf("%d", (b >> 16) % 2); 
}

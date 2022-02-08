#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main() {
	float array[4]; 
	array[0] = -3.4f;
	array[1] = 4.5f;
	array[2] = -5.6f;
	array[3] = 6.7f;
	for (int i = 0; i < 4; i++) {
		printf("%.1f ", *(array + i));
		if (i == 1) {
			printf("\n");
		}
	}

	printf("\n");
	printf("\n");




	double* mas1 = (double*)malloc(4 * sizeof(double)); 
	*(mas1) = -3.4;
	*(mas1 + 1) = 4.5;
	*(mas1 + 2) = -5.6;
	*(mas1 + 3) = 6.7;
	for (int i = 0; i < 4; i++) {
		printf("%.1f ", *(mas1 + i));
		if (i == 1) {
			printf("\n");
		}
	}
	free(mas1); 
	return 0;
}
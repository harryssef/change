#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main() {
	int array[] = { 34, 45, 56, 67, 78, 89 }; 
	for (int i = 0; i < 3; i++) {
		printf("%d ", array[i]);
	}
	printf("\n"); 
	for (int i = 3; i < 6; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");
	printf("\n");

	int matrica1[2][2] = { 
		{2, 1},
		{1, 3}
	};
	int matrica2[2][2] = {
		{1, 2},
		{3, 1}
	};
	int result[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			result[i][j] = matrica1[i][0] * matrica2[0][j] + matrica1[i][1] * matrica2[1][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", result[i][j]);
		}

		printf("\n");
	}
	return 0;
}
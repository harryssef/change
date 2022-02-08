#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

void NOD(int digit1, int digit2);

void NOK(int digit1, int digit2);


int main() {
	int digit1;
	scanf_s("%d", &digit1);

	int digit2;
	scanf_s("%d", &digit2);

	NOD(digit1, digit2);

	NOK(digit1, digit2);
	return 0;
}

void NOD(int digit1, int digit2) {
	int NOD;
	for (int i = 1; i < digit1 + 1; i++) {
		if (digit1 % i == 0 && digit2 % i == 0) {
			NOD = i;
		}
	}
	printf("%d\n", NOD);
}

void NOK(int digit1, int digit2) {
	int NOK;
	int NOD;
	for (int i = 1; i < digit1 + 1; i++) {
		if (digit1 % i == 0 && digit2 % i == 0) {
			NOD = i;
		}
	}
	NOK = digit1 * digit2 / NOD;
	printf("%d", NOK);
}




int* BuildArray(int n, int* len); 

int main() {
	int n, len = 0;
	scanf_s("%d", &n);
	int * arr = BuildArray(n, &len);
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

int* BuildArray(int n, int* len) {
	int b = n;
	while (n > 0) {
		n = n / 10;
		*len = *len + 1; 
	}

	int* array = (int*)malloc(*len* sizeof(int));
	for (int i = *len - 1; i >= 0; i--) {
		array[i] = b % 10;
		b = b / 10;
	}
	return array;
}
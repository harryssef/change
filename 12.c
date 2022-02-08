#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
int main() {
	FILE* out = fopen("12.txt", "w");
	char array[10][10] = {
		"20.12.21", "21.12.21", "22.12.21", "23.12.21", "24.12.21",
		"25.12.21", "26.12.21", "27.12.21", "28.12.21", "29.12.21"
	};
	for (int i = 0; i < 10; i++) {
		fprintf(out, "%s\n", array[i]);
	}
	fclose(out);
	return 0;
}
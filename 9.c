#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int digit = 0, LowerLetter = 0, UpperLetter = 0;
	int size;
	scanf_s("%d\n", &size);
	char* stroka = (char*)malloc(size * sizeof(char));
	gets(stroka);
	for (int i = 0; i < size; i++) {
		if ('0' <= stroka[i] && stroka[i] <= '9') {
			digit++;
		}
		else if ('a' <= stroka[i] && stroka[i] <= 'z') {
			LowerLetter++;
		}
		else if ('A' <= stroka[i] && stroka[i] <= 'Z') {
			UpperLetter++;
		}
	}
	printf("%d\n", digit);
	printf("%d\n", LowerLetter);
	printf("%d", UpperLetter);
	free(stroka);


	int digit;
	scanf_s("%d", &digit);

	char* numbers[] = { "ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };


	printf("%s", numbers[digit]);

	return 0;
}




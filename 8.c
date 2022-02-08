#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main() {
	
	setlocale(LC_ALL, "Rus"); 


	int size, n; 
	scanf_s("%d\n", &size);
	scanf_s("%d\n", &n);
	char* stroka3 = (char*)malloc(size * sizeof(char));
	gets(stroka3);
	char* stroka4 = (char*)malloc(size * sizeof(char));
	gets(stroka4);
	strncat(stroka3, stroka4, n);
	printf("%s", stroka3);
	free(stroka3);
	free(stroka4); 



	int string; 
	int rate;
	scanf_s("%d\n", &rate);
	int scale;
	scanf_s("%d\n", &scale);
	char* stroka5 = (char*)malloc(rate * sizeof(char));
	gets(stroka5);
	char* stroka6 = (char*)malloc(scale * sizeof(char));
	gets(stroka6);
	string = strcmp(stroka5, stroka6);
	if (string < 0) {
		printf("stroka5 is less than stroka6");
	}
	else if (string > 0) {
		printf("stroka6 is less than stroka5");
	}
	else {
		printf("stroka6 is copycat stroka5");
	}
	free(stroka5);
	free(stroka6); 




	int n; 
	scanf_s("%d\n", &n);
	int dimension;
	scanf_s("%d\n", &dimension);
	int proportions;
	scanf_s("%d\n", &proportions);
	char* stroka9 = (char*)malloc(dimension * sizeof(char));
	gets(stroka9);
	char* stroka10 = (char*)malloc(proportions * sizeof(char));
	gets(stroka10);
	strncpy(stroka9, stroka10, n);
	printf("%s", stroka9);
	free(stroka9);
	free(stroka10); 




	int gage, symbol; 
	scanf_s("%d\n", &gage);
	scanf_s("%c\n", &symbol);
	char* stroka11 = (char*)malloc(gage * sizeof(char));
	gets(stroka11);
	char *pch = strrchr(stroka11, symbol);
	printf("%d\n", pch - stroka11 + 1); 
	free(stroka11);





	int calibre, girth; 
	scanf_s("%d\n", &calibre);
	scanf_s("%d\n", &girth);
	char* stroka12 = (char*)malloc(calibre * sizeof(char));
	gets(stroka12);
	char* stroka13 = (char*)malloc(girth * sizeof(char));
	gets(stroka13);
	printf("%d\n", strcspn(stroka12, stroka13));
	free(stroka12);
	free(stroka13); 
	return 0;
}



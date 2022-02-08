#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

struct circle {
	int x, y;
	int radius;
};


union {
	struct {
		unsigned char NumLock : 1;
		unsigned char CapsLock : 1;
		unsigned char ScrollLock : 1;
	};
	unsigned char flags;
} condition;



int main() {


	setlocale(LC_ALL, "Rus"); 
	enum print_edition {
		Книга, Журнал, Газета, Блокнот
	}direction;
	char const* assoc[] = {
		[Книга] = "Книга",
		[Журнал] = "Журнал",
		[Газета] = "Газета",
		[Блокнот] = "Блокнот" };
	direction = Газета;
	printf("%d", Газета);


	struct circle ourcircle;
	ourcircle.x = 3;
	ourcircle.y = -1;
	ourcircle.radius = 5;
	float perimetr = ourcircle.radius * 2 * 3.14f;
	float ploshad = ourcircle.radius * ourcircle.radius * 3.14f;
	float dlina = ourcircle.radius * 2 * 3.14f;
	printf("Perimetr of our circle - %.2f\n", perimetr);
	printf("Area of our circle - %.2f\n", ploshad);
	printf("Length of our circle - %.2f\n", dlina);
	printf("Coordinates of center our circle - (%d; %d)", ourcircle.x, ourcircle.y);

	


	scanf_s("%x", &condition.flags);
	if (condition.NumLock)
		printf("NumLock is on\n");
	else
		printf("NumLock is off\n");


	if (condition.CapsLock)
		printf("CapsLock is on\n");
	else
		printf("CapsLock is off\n");


	if (condition.ScrollLock)
		printf("ScrollLock is on\n");
	else
		printf("ScrollLock is off\n");


	return 0;
}



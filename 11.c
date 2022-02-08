#include "11_1.h"


int area_of_our_triangle(struct description_of_figure triangle) {
	int value = (triangle.x_B - triangle.x_A) * (triangle.y_C - triangle.y_A) - (triangle.x_C - triangle.x_A) * (triangle.y_B - triangle.y_A);
	int area = fabs(value) / 2;
	return area;
}


int perimeter_of_our_triangle(struct description_of_figure triangle) {
	int AB = sqrt(fabs((pow(triangle.x_B, 2) - pow(triangle.x_A, 2)) + (pow(triangle.y_B, 2) - pow(triangle.y_A, 2))));
	int AC = sqrt(fabs((pow(triangle.x_C, 2) - pow(triangle.x_A, 2)) + (pow(triangle.y_C, 2) - pow(triangle.y_A, 2))));
	int BC = sqrt(fabs((pow(triangle.x_C, 2) - pow(triangle.x_B, 2)) + (pow(triangle.y_C, 2) - pow(triangle.y_B, 2))));

	int perimeter = AB + AC + BC;
	return perimeter;
}

int main() {
    
	struct description_of_figure triangle;
	triangle.x_A = 1;
	triangle.y_A = 1;

	triangle.x_B = 4;
	triangle.y_B = 4;

	triangle.x_C = 5;
	triangle.y_C = 1;

	int function_of_area = area_of_our_triangle(triangle);

	int function_of_perimeter = perimeter_of_our_triangle(triangle);


	printf("%d\n", function_of_area);


	printf("%d\n", function_of_perimeter);


	return 0;
}
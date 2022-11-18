#include <stdio.h>

// Write program to add 3 numbers

int main() {
	int length, width, area;
	printf("Length: ");
	scanf("%i" , &length);
	printf("Enter width: ");
	scanf("%i" , &width);
	area = length *  width;
	printf("The Area Is %i\n", area );

	return 0;
}


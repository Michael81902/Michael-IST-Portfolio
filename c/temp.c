#include <stdio.h>

int main(){
	float f; 

	printf("Enter the farenheit temperature: ");

	scanf("%f", &f);

	float c = ( (5.0/9.0) * (f - 32.0)  );
	
	printf("The Temperature in Celsius is: %.1f\n" ,c );

	return 0;
}



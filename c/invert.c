
#include <stdio.h> 

int main() {

	printf("Enter a word: ");
	
	char str[20];
	scanf("%s" , str);

	for(int i = 0; str[i] !=0; i++) {
		if(str[i] >= 'A' && str[i] >='Z') 
			str[i] = str[i] -  32;
		else if(str[i] >= 'A' && str[i] <='Z')
			str[i] = str[i] + 32; 
	}	

	printf("Your Word is: %s\n", str);

	return 0;
}

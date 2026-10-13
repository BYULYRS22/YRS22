#include <stdio.h>

int main() {
	int num1;
	int num2;
	
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);
	
	printf("\n----------------RESULT-----------------\n");
	if (num1 > num2){
		printf("Num1 is greater than Num2");
	}
	else if (num2 > num1){
		printf("Num2 is greater than Num1");
	}
	else {
		printf("Both have the same value");
	}
	
	
	
	return 0;	
	
}

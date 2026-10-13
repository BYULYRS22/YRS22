#include<stdio.h>
int main()
{
	float Item1, Item2, Item3, total;
	
	
	printf("Enter Item1:\n");
	scanf("%f", &Item1);
	
	printf("Enter Item2:\n");
	scanf("%f", &Item2);
	
	printf("Enter Item3:\n");
	scanf("%f", &Item3);
	
	total = Item1 + Item2 + Item3;
	printf("Total Item Purchased: %.2f",total);
	
	return 0;
}

#include <stdio.h>

int main() {
	
	char item[100];
	float sellingPrice, cupsSold, beanCost, packagingCost;
	float grossSales, rawMaterialCost, grossMargin;
	
	printf("Enter beverage item: ");
	scanf("%[^\n]", item);
	printf("Enter selling price per cup: ");
	scanf("%f", &sellingPrice);
	printf("Enter cups sold per day: ");
	scanf("%f", &cupsSold);
	printf("Enter raw bean cost per cup: ");
	scanf("%f", &beanCost);
	printf("Enter cup & milk packaging cost per cup: ");
	scanf("%f", &packagingCost);
	
	grossSales = sellingPrice * cupsSold;
	rawMaterialCost = (beanCost + packagingCost) * cupsSold;
	grossMargin = grossSales - rawMaterialCost;
	
	printf("-----------------------------------------\n");
	printf("Item: %s\n", item);
	printf("Daily Gross Sales Revenue: %.2f\n", grossSales);
	printf("Daily Raw Material Cost: %.2f\n", rawMaterialCost);
	printf("Daily Operating Gross Margin: %.2f\n", grossMargin);
	
	
	return 0;
		
}

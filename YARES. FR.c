#include <stdio.h>

int main() {
	int choice;
	char item[50], sides[100];
	float basePrice = 0.0, sideFee = 0.0;
	float vat, totalSales;
	
	printf("=================================\n");
	printf(" FAST FOOD EXPRESS KIOSK\n");
	printf("=================================\n");
	
	printf("1. Deluxe Burger Meal\n");
	printf("2. Pepperoni Pizza Meal\n");
	printf("3. Chicken Tender Basket\n");
	printf("4. Veggie Wrap Combo\n");
	
	printf("------------------------------------------------\n");
	printf("Select your combo meal (1-4): ");
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			sprintf(item, "Deluxe Burger Meal");
			sprintf(sides, "Medium Fries & CokeFloat");
			basePrice = 8.50;
			sideFee = 1.50;
			break;
			
		case 2:
			sprintf(item, "Pepperoni Pizza Meal");
			sprintf(sides, "Garlic Bread & Soda (FREE)");
			basePrice = 10.00;
			sideFee = 0.00;
			break;
			
		case 3: 
			sprintf(item, "Chicken Tender Basket");
			sprintf(sides, "Gravy & Juice (FREE)");
			basePrice = 9.00;
			sideFee =0.00;
			break;
			
		case 4:
			sprintf(item, "Veggie Wrap Combo");
			sprintf(sides, "Side Salad & Bottled Water");
			basePrice = 7.50;
			sideFee = 1.50;
			break;
			
		default:
			printf("\nInvalid choice! Please select from 1 to 4.\n");
			return 0;
		}
		
		vat = (basePrice + sideFee) * 0.12;
		totalSales = basePrice + sideFee + vat;
		
		printf("\n-------------------ORDER DETAILS--------------------\n");
		printf("Item: %s\t\t$ %.2f\n", item, basePrice);
		printf("Sides: %s\t$ %.2f\n", sides, sideFee);
		printf("VAT Sales: 12%%\t\t$ %.2f\n", vat);
		printf("Total Sales: \t\t$ %.2f\n", totalSales);
		
		printf("---------------------------------\n");
		printf(" THANK YOU FOR ORDERING\n");
		printf("---------------------------------\n");
		
		
		
		return 0;
}

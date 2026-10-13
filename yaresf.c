#include <stdio.h>

int main()
{
    float item1, item2, item3;
    float total;

    printf("Enter item1: ");
    scanf("%f", &item1);

    printf("Enter item2: ");
    scanf("%f", &item2);

    printf("Enter item3: ");
    scanf("%f", &item3);

    total = item1 + item2 + item3;

    printf("\n");
    printf("Total item purchased: $%.2f.\n", total);

    return 0;
}


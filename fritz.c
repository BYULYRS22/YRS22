#include <stdio.h>

int main()
{
    char firstName[50];
    char lastName[50];
    int age;

    printf("Enter first name: ");
    scanf("%s", firstName);

    printf("Enter last name: ");
    scanf("%s", lastName);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("\n");
    printf("Hello, I am %s %s.\n", firstName, lastName);
    printf("And I am %d years of age.\n", age);

    return 0;
}


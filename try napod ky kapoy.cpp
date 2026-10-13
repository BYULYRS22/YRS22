#include <stdio.h>

int main() {
    char name[50];
    float quiz1, quiz2, quiz3, average;

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("Enter Quiz 1 score: ");
    scanf("%f", &quiz1);

    printf("Enter Quiz 2 score: ");
    scanf("%f", &quiz2);

    printf("Enter Quiz 3 score: ");
    scanf("%f", &quiz3);

    average = (quiz1 + quiz2 + quiz3) / 3;

    printf("----------------------------------------\n");
    printf("Student: %s\n", name);
    printf("Quiz Average: %.2f\n", average);

    return 0;
}


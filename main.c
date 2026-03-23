#include <stdio.h>

int main() {
    int year;

    printf("=== Check Leap Year ===\n\n");

    printf("Enter a Year: ");
    scanf("%d", &year);

    // Validation
    if (year <= 0) {
        printf("\nError: Please enter a Valid Year!\n");
        return 1;
    }

    // Check Leap Year conditions
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("\nResult: %d is a LEAP YEAR. ✓\n", year);
    } else {
        printf("\nResult: %d is NOT a Leap Year. ✗\n", year);
    }

    return 0;
}

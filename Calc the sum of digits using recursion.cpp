#include <stdio.h>

// Function to calculate the sum of digits in a 2 digit number using recursion
int sumOfDigitsRecursive(int number) {
    if (number == 0) {
        return 0; // Base case: if the number is 0, the sum is 0
    } else {
        int lastDigit = number % 10; // Extract the last digit
        int remainingNumber = number / 10; // Remove the last digit
        return lastDigit+remainingNumber; // Recursively call the function
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = sumOfDigitsRecursive(num);
    printf("The sum of the digits in %d is %d\n", num, result);

    return 0;
}


#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int count_digits(int number) {
    int count = 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    return count;
}

// Function to check if a number is a Disarium number
int is_disarium(int number) {
    int num = number;
    int length = count_digits(num);
    int sum = 0;

    // Calculate the sum of digits powered to their respective positions
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, length);
        length--;
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == number);
}

int main() {
    int num;
    printf("Enter a number to check if it is a Disarium number: ");
    scanf("%d", &num);

    // Check and display the result
    if (is_disarium(num)) {
        printf("%d is a Disarium number.\n", num);
    } else {
        printf("%d is not a Disarium number.\n", num);
    }

    return 0;
}

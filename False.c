#include <stdio.h>
#include <math.h>

int main() {
    int number, sum = 0, digit = 0, temp, remainder;
    printf("Enter the number: ");
    scanf("%d", &number);
    temp = number;

    // Count the number of digits
    int num_copy = number;
    while (num_copy != 0) {
        num_copy /= 10;
        digit++;
    }

    // Reset number to original value
    while (number != 0) {
        remainder = number % 10;
        sum += pow(remainder, digit);
        number /= 10;
    }

    // Check if the number is a Disarium number
    if (temp == sum)
        printf("Disarium\n");
    else
        printf("Not Disarium\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n, intput, digit;
    int reverse = 0, sum = 0, output;

    printf("Enter a number: ");
    scanf("%d", &n);

    intput = n;

    while (intput > 0) {
        digit = intput % 10;

        reverse = reverse * 10 + digit;
        sum = sum + digit;

        intput = intput / 10;
    }

    output = reverse + sum;

    printf("Output = %d", output);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, original, remainder, n, temp;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        original = num;
        temp = num;
        n = 0;

        // count digits
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = num;
        int sum = 0;

        // calculate Armstrong sum
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, n);
            temp /= 10;
        }

        if (sum == original) {
            printf("%d ", original);
        }
    }

    return 0;
}
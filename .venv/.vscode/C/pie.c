#include <stdio.h>

int main() {
    int terms;
    printf("Enter the number of terms for Pi approximation: ");
    scanf("%d", &terms);

    long double pi = 0.0;
    int sign = 1;

    for (long long i = 0; i < terms; i++) {
        pi += sign * (4.0 / (2 * i + 1));
        sign = -sign;  // Alternate sign
    }

    printf("Approximate value of Pi: %.100Lf\n", pi);
    return 0;
}

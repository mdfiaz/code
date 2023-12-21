#include <stdio.h>

int main() {
    int degree, x;
    
    // Input degree
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    // Input coefficients
    int coefficients[degree + 1];
    printf("Enter the coefficients: ");
    for (int i = 0; i <= degree; ++i) {
        scanf("%d", &coefficients[i]);
    }

    // Input x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Evaluate polynomial
    int result = 0;
    for (int i = 0; i <= degree; ++i) {
        result += coefficients[i] * pow(x, degree - i);
    }

    // Output
    printf("P(%d) = %d\n", x, result);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    double x, xn = 1.0;
    int n;

    printf("x = ");
    scanf("%lf", &x);
    printf("n = ");
    scanf("%d", &n);

    int exponent = n;
    double putere;

    if (exponent < 0) {
        putere = 1.0 / x;
        exponent = -exponent;
    } else {
        putere = x;
    }

    while (exponent > 0) {
        if (exponent % 2 == 1)
            xn *= putere;

        putere *= putere;
        exponent /= 2;
    }

    printf("x^n = %.10lf\n", xn);
    printf("Verificare cu pow(): %.10lf\n", pow(x, n));

    return 0;
}

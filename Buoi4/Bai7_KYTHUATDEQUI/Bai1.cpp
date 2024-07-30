#include <stdio.h>
#include <math.h>


int sum_of_first_n(int n) {
    if (n <= 0) return 0;
    return n + sum_of_first_n(n - 1);
}


double sum_sqrt_5(int n) {
    if (n <= 0) return 0;
    return sqrt(5) + sum_sqrt_5(n - 1);
}


double harmonic_sum(int n) {
    if (n <= 0) return 0;
    return 1.0 / n + harmonic_sum(n - 1);
}


double product_sum(int n) {
    if (n <= 0) return 0;
    return n * (n + 1) + product_sum(n - 1);
}


double complex_sum(int n) {
    if (n <= 0) return 0;
    double fact = 1;
    for (int i = 1; i <= n; ++i) fact *= i; 
    double result = n * (n + 1) / (n + 1) + sqrt(n + 2) / fact;
    return result + complex_sum(n - 1);
}


double mixed_sum(int n) {
    if (n <= 0) return 0;
    return (double)n / (n + 1) + sqrt(n) + mixed_sum(n - 1);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("S(n) = 1 + 2 + ... + %d = %d\n", n, sum_of_first_n(n));
    printf("S(n) = sqrt(5) + sqrt(5) + ... + sqrt(5) (tong %d l?n) = %f\n", n, sum_sqrt_5(n));
    printf("S(n) = 1/1 + 1/2 + ... + 1/%d = %f\n", n, harmonic_sum(n));
    printf("S(n) = 1.2 + 2.3 + ... + %d.(%d+1) = %f\n", n, n, product_sum(n));
    printf("S(n) = 1.2!/2 + sqrt(3) + ... + %d.(%d+1)/(%d+1) + sqrt(%d+2)! = %f\n", n, n, n, n, complex_sum(n));
    printf("S(n) = 1/2 + sqrt(1) + 2/3 + sqrt(2) + ... + %d/(%d+1) + sqrt(%d) = %f\n", n, n, n, mixed_sum(n));

    return 0;
}


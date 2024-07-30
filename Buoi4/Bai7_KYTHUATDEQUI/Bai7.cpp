#include <stdio.h>


int Fibonacci(int n) {
    if (n <= 1) return 1; 
    return Fibonacci(n - 1) + Fibonacci(n - 2); 
}

int main() {
    int n;
    printf("Nhap vao gia tri n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1;
    }

    int result = Fibonacci(n);
    printf("So Fibonacci thu %d la: %d\n", n, result);

    return 0;
}


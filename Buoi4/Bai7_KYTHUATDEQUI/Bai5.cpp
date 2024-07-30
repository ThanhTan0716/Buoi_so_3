#include <stdio.h>


int tinh_xn(int n) {
    if (n == 0) return 1; 
    if (n == 1) return 2; 

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += tinh_xn(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap vao gia tri n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Gia tri n phai lon hon hoac bang 0.\n");
        return 1;
    }

    int result = tinh_xn(n);
    printf("Gia tri cua x%d la: %d\n", n, result);

    return 0;
}


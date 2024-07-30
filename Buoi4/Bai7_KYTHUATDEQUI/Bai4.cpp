#include <stdio.h>


int tinhSoHangThuN_a(int n) {
 
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return -1;

   
    int A[n+1];
    A[0] = 1;
    A[1] = 0;
    A[2] = -1;

   
    for (int i = 3; i <= n; i++) {
        A[i] = 2 * A[i-1] - 3 * A[i-2] - A[i-3];
    }

    return A[n];
}


int tinhSoHangThuN_b(int n) {
   
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;

   
    int A[n+1];
    A[1] = 1;
    A[2] = 2;
    A[3] = 3;

  
    for (int i = 4; i <= n; i++) {
        A[i] = 2 * A[i-1] + A[i-2] - 3 * A[i-3];
    }

    return A[n];
}

int main() {
    int choice, n;

    printf("Chen day so can tinh:\n");
    printf("1. Day so phan a: A0 = 1 ; A1 = 0 ; A2 = -1 ; An = 2*An-1 - 3*An-2 - An-3\n");
    printf("2. Day so phan b: A1 = 1 ; A2 = 2 ; A3 = 3 ; An+3 = 2*An+2 + An+1 - 3*An\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen duong!\n");
    } else {
        int result;
        if (choice == 1) {
            result = tinhSoHangThuN_a(n);
            printf("So hang thu %d cua day An (phan a) la: %d\n", n, result);
        } else if (choice == 2) {
            result = tinhSoHangThuN_b(n);
            printf("So hang thu %d cua day An (phan b) la: %d\n", n, result);
        } else {
            printf("Lua chon khong hop li!\n");
        }
    }

    return 0;
}


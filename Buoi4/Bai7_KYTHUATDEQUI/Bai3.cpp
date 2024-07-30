#include <stdio.h>


int giaTriPhanTuThuN(int a, int r, int n) {
    if (n == 1) {
        return a;
    } else {
        return giaTriPhanTuThuN(a, r, n - 1) + r;
    }
}

int main() {
    int a, r, n;


    printf("Nhap hang dau (a): ");
    scanf("%d", &a);
    printf("Nhap cong sai (r): ");
    scanf("%d", &r);
    printf("Nhap vi tri phan tu can tim (n): ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Vui long nhap vi tri phan tu la mot so nguyen duong!\n");
    } else {
       
        int un = giaTriPhanTuThuN(a, r, n);
        printf("Gia tri phan tu thu %d cua cap so cong la: %d\n", n, un);
    }

    return 0;
}


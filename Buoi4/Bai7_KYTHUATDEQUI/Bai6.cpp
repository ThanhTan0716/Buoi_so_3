#include <stdio.h>

int dem_so_chu_so_de_quy(int n) {
    if (n == 0) return 0;
    return 1 + dem_so_chu_so_de_quy(n / 10);
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong lon hon 0.\n");
        return 1;
    }

    int so_chu_so = dem_so_chu_so_de_quy(n);
    printf("So chu so cua %d la: %d\n", n, so_chu_so);

    return 0;
}


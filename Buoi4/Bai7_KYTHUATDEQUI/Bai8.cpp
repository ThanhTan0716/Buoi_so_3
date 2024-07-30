#include <stdio.h>


void xuat_day_so_Fibonacci(int m) {
    int a = 1, b = 1; 
    printf("Day so Fibonacci nho hon %d la: ", m);
    if (m <= 1) {
        printf("Khong co so Fibonacci nao nho hon %d\n", m);
        return;
    }
    printf("%d %d ", a, b); 
    while (1) {
        int next = a + b;
        if (next >= m) break; 
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int m;
    printf("Nhap vao gia tri m: ");
    scanf("%d", &m);

    if (m <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1;
    }

    xuat_day_so_Fibonacci(m);

    return 0;
}


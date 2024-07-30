#include <stdio.h>


int uocChungLonNhat(int a, int b) {

    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int a, b;

    
    printf("Nhap so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b: ");
    scanf("%d", &b);

   
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
    } else {
       
        int ucln = uocChungLonNhat(a, b);
        printf("Uoc chung lon nhat cua %d và %d là: %d\n", a, b, ucln);
    }

    return 0;
}


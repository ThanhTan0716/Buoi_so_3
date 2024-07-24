#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void taoMaTran(int a[MAX][MAX], int n);
void xuatMaTran(int a[MAX][MAX], int n);
void xuatDuongCheoChinh(int a[MAX][MAX], int n);
void xuatDuongCheoSongSong(int a[MAX][MAX], int n);
int timMaxTamGiacTren(int a[MAX][MAX], int n);
void sapXepZigZag(int a[MAX][MAX], int n);
void sapXepDuongCheoChinh(int a[MAX][MAX], int n);

int main() {
    int n;
    int a[MAX][MAX];

    printf("Nhap cap cua ma tran (n >= 5): ");
    scanf("%d", &n);

    if (n < 5) {
        printf("Cap cua ma tran phai lon hon hoac bang 5.\n");
        return 1;
    }

    srand(time(0));
    taoMaTran(a, n);
    printf("Ma tran ngau nhien:\n");
    xuatMaTran(a, n);

    printf("\nCac phan tu tren duong cheo chinh:\n");
    xuatDuongCheoChinh(a, n);

    printf("\nCac phan tu thuoc duong cheo song song voi duong cheo chinh:\n");
    xuatDuongCheoSongSong(a, n);

    int max = timMaxTamGiacTren(a, n);
    printf("\nPhan tu lon nhat thuoc tam giac tren cua duong cheo chinh: %d\n", max);

    printf("\nMa tran sau khi sap xep zig-zag:\n");
    sapXepZigZag(a, n);
    xuatMaTran(a, n);

    printf("\nDuong cheo chinh sau khi sap xep tang dan:\n");
    sapXepDuongCheoChinh(a, n);
    xuatMaTran(a, n);

    return 0;
}

void taoMaTran(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 100;  
        }
    }
}

void xuatMaTran(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void xuatDuongCheoChinh(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\n");
}

void xuatDuongCheoSongSong(int a[MAX][MAX], int n) {
   
    for (int k = 1; k < n; k++) {
        for (int i = 0, j = k; j < n; i++, j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    
    for (int k = 1; k < n; k++) {
        for (int i = k, j = 0; i < n; i++, j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int timMaxTamGiacTren(int a[MAX][MAX], int n) {
    int max = a[0][1];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}

void sapXepZigZag(int a[MAX][MAX], int n) {
    int temp[MAX * MAX];
    int index = 0;

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[index++] = a[i][j];
        }
    }

    
    for (int i = 0; i < index - 1; i++) {
        for (int j = i + 1; j < index; j++) {
            if (temp[i] > temp[j]) {
                int tmp = temp[i];
                temp[i] = temp[j];
                temp[j] = tmp;
            }
        }
    }

    
    index = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                a[i][j] = temp[index++];
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                a[i][j] = temp[index++];
            }
        }
    }
}

void sapXepDuongCheoChinh(int a[MAX][MAX], int n) {
    int temp[MAX];

  
    for (int i = 0; i < n; i++) {
        temp[i] = a[i][i];
    }

  
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (temp[i] > temp[j]) {
                int tmp = temp[i];
                temp[i] = temp[j];
                temp[j] = tmp;
            }
        }
    }

   
    for (int i = 0; i < n; i++) {
        a[i][i] = temp[i];
    }
}


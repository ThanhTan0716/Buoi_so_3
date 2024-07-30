#include <stdio.h>
#include <string.h>

#define MAX_SV 100
#define MAX_NAME 50
#define MAX_TEXT 10000

typedef struct {
    char name[MAX_NAME];
    int age;
    float gpa;
} SinhVien;

void nhapSinhVien(SinhVien ds[], int *n) {
    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap thong tin sinh vien thu %d\n", i + 1);
        printf("Ho ten: ");
        scanf(" %[^\n]", ds[i].name);
        printf("Tuoi: ");
        scanf("%d", &ds[i].age);
        printf("Diem GPA: ");
        scanf("%f", &ds[i].gpa);
    }
}

void hienThiSinhVien(SinhVien ds[], int n) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d: Ho ten: %s, Tuoi: %d, GPA: %.2f\n", i + 1, ds[i].name, ds[i].age, ds[i].gpa);
    }
}

void bruteForceSearch(char T[], char P[]) {
    int n = strlen(T);
    int m = strlen(P);
    printf("Vi tri cac chuoi P trong T: ");
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && T[i + j] == P[j]) {
            j++;
        }
        if (j == m) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    SinhVien ds[MAX_SV];
    int n;
    nhapSinhVien(ds, &n);
    hienThiSinhVien(ds, n);

    int choice;
    printf("Chon phuong thuc nhap chuoi T:\n");
    printf("1. Nhap tu ban phim\n");
    printf("2. Doc tu file\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);
    getchar(); 

    char T[MAX_TEXT], P[MAX_NAME];
    if (choice == 1) {
        printf("Nhap chuoi T: ");
        gets(T);
    } else if (choice == 2) {
        char filename[MAX_NAME];
        printf("Nhap ten file van ban: ");
        gets(filename);
        FILE *file = fopen(filename, "r");
        if (file == NULL) {
            printf("Khong the mo file.\n");
            return 1;
        }
        fgets(T, sizeof(T), file);
        fclose(file);
    } else {
        printf("Lua chon khong hop le.\n");
        return 1;
    }

    printf("Nhap chuoi P: ");
    gets(P);
    bruteForceSearch(T, P);

    return 0;
}


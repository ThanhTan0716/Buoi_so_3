#include <stdio.h>
#include <string.h>


int tim_vi_tri_xuat_hien(char s1[], char s2[]) {
    char *pos = strstr(s1, s2);
    if (pos) {
        return pos - s1;
    }
    return -1;
}


void noi_chuoi(char s1[], char s2[]) {
    strcat(s1, s2);
}

int main() {
    char s1[100], s2[50];
    
    printf("Nhap chuoi s1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; 
    
    printf("Nhap chuoi s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0'; 

 
    int vi_tri = tim_vi_tri_xuat_hien(s1, s2);
    if (vi_tri != -1) {
        printf("Chuoi s2 xuat hien trong chuoi s1 tai vi tri: %d\n", vi_tri);
    } else {
        printf("Chuoi s2 khong xuat hien trong chuoi s1.\n");
      
        noi_chuoi(s1, s2);
        printf("Chuoi s1 sau khi noi chuoi s2: %s\n", s1);
    }

    return 0;
}


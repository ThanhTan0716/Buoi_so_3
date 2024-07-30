#include <stdio.h>
#include <ctype.h>


int kiem_tra_ky_so(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (!isdigit(s[i])) {
            return 0; 
        }
        i++;
    }
    return 1; 
}

int main() {
    char s[100];

   
    printf("Nhap vao chuoi can kiem tra: ");
    gets(s);

   
    if (kiem_tra_ky_so(s)) {
        printf("Chuoi '%s' chua toan ky so.\n", s);
    } else {
        printf("Chuoi '%s' khong chua toan ky so.\n", s);
    }

    return 0;
}


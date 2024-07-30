#include <stdio.h>
#include <string.h>
#include <ctype.h>


void chuanHoaChuoi(char str[]) {
    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (!isspace(str[i])) {
            str[index++] = tolower(str[i]);
        }
    }
    str[index] = '\0'; 
}


int kiemTraDoiXung(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[1000];
    
    printf("Nhap chuoi: ");
    gets(str);

 
    chuanHoaChuoi(str);

  
    if (kiemTraDoiXung(str)) {
        printf("Chuoi doi xung.\n");
    } else {
        printf("Chuoi khong doi xung.\n");
    }

    return 0;
}


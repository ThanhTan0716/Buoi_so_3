#include <stdio.h>
#include <ctype.h>
#include <string.h>

void chuyenDoiChuoi(char str[]) {
    int i = 0;
   
    if (str[i] != '\0' && isalpha(str[i])) {
        str[i] = toupper(str[i]);
        i++;
    }

    
    while (str[i] != '\0') {
       
        if (str[i] == ' ' && str[i + 1] != '\0' && isalpha(str[i + 1])) {
            str[i + 1] = toupper(str[i + 1]);
            i++;
        } else {
           
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char str[1000];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

   
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    chuyenDoiChuoi(str);

    printf("Chuoi sau khi chuyen doi: %s\n", str);

    return 0;
}


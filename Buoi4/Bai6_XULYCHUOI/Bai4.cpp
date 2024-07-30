#include <stdio.h>
#include <string.h>


void timKiemTen(const char *hoTen, const char *ten) {
    char hoTenCopy[100];
    strcpy(hoTenCopy, hoTen);

   
    char *token = strtok(hoTenCopy, " ");
    int timThay = 0;

 
    while (token != NULL) {
        if (strcmp(token, ten) == 0) {
            printf("Ten \"%s\" ton tai trong chuoi ho ten.\n", ten);
            timThay = 1;
            break;
        }
        token = strtok(NULL, " ");
    }

  
    if (!timThay) {
        printf("Ten \"%s\" khong ton tai trong chuoi ho ten.\n", ten);
    }
}

int main() {
    char hoTen[100];
    char ten[50];


    printf("Nhap chuoi ho ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);
   
    hoTen[strcspn(hoTen, "\n")] = '\0';


    printf("Nhap ten can tim: ");
    fgets(ten, sizeof(ten), stdin);
   
    ten[strcspn(ten, "\n")] = '\0';

 
    timKiemTen(hoTen, ten);

    return 0;
}


#include <stdio.h>
#include <string.h>

void xoaKyTu(char *chuoi, char kyTu) {
    int doDai = strlen(chuoi);
    int viTriMoi = 0;
    
    for (int i = 0; i < doDai; i++) {
        if (chuoi[i] != kyTu) {
            chuoi[viTriMoi++] = chuoi[i];
        }
    }
    chuoi[viTriMoi] = '\0'; 
}

int main() {
    char chuoi[100];
    char kyTu;

 
    printf("Nhap chuoi bat ki: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    
   
    chuoi[strcspn(chuoi, "\n")] = '\0';
    
   
    printf("Nhap ky tu muon xoa: ");
    scanf("%c", &kyTu);

  
    xoaKyTu(chuoi, kyTu);

 
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kyTu, chuoi);

    return 0;
}


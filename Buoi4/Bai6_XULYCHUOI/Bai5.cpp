#include <stdio.h>
#include <string.h>


void catChuoiHoTen(char *hoTen, char *hoLot, char *ten) {
    int doDai = strlen(hoTen);
    int viTriCuoiCungCuaKhoangTrang = -1;


    for (int i = doDai - 1; i >= 0; i--) {
        if (hoTen[i] == ' ') {
            viTriCuoiCungCuaKhoangTrang = i;
            break;
        }
    }

   
    if (viTriCuoiCungCuaKhoangTrang == -1) {
        strcpy(hoLot, "");
        strcpy(ten, hoTen);
    } else {

        strncpy(hoLot, hoTen, viTriCuoiCungCuaKhoangTrang);
        hoLot[viTriCuoiCungCuaKhoangTrang] = '\0';


        strcpy(ten, hoTen + viTriCuoiCungCuaKhoangTrang + 1);
    }
}


void nhapChuoi(char *chuoi, int kichThuoc) {
    printf("Nhap ho ten: ");
    fgets(chuoi, kichThuoc, stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';  
}


void hienThiKetQua(char *hoLot, char *ten) {
    printf("Ho lot: %s\n", hoLot);
    printf("Ten: %s\n", ten);
}

int main() {
    char hoTen[100];
    char hoLot[100];
    char ten[50];

    nhapChuoi(hoTen, sizeof(hoTen));
    catChuoiHoTen(hoTen, hoLot, ten);
    hienThiKetQua(hoLot, ten);

    return 0;
}


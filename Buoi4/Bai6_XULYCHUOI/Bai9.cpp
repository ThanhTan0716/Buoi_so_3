#include <stdio.h>
#include <string.h>


void chen_chuoi(char str[], char strInsert[], int vt) {
    int lenStr = strlen(str);
    int lenInsert = strlen(strInsert);

 
    if (vt < 0 || vt > lenStr) {
        printf("Vi tri chen khong hop li.\n");
        return;
    }

   
    for (int i = lenStr - 1; i >= vt; i--) {
        str[i + lenInsert] = str[i];
    }

    
    for (int i = 0; i < lenInsert; i++) {
        str[vt + i] = strInsert[i];
    }

   
    str[lenStr + lenInsert] = '\0';
}

int main() {
    char str[200], strInsert[100];
    int vt;

    printf("Nhap chuoi goc (str): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Nhap chuoi can chen (strInsert): ");
    fgets(strInsert, sizeof(strInsert), stdin);
    strInsert[strcspn(strInsert, "\n")] = '\0'; 

    printf("Nhap vi tri can chen (vt): ");
    scanf("%d", &vt);

    
    chen_chuoi(str, strInsert, vt);

   
    printf("Chuoi sau khi chen: %s\n", str);

    return 0;
}


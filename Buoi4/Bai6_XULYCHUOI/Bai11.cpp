#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 100
#define MAX_ARRAY_SIZE 100


int isAllDigits(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i])) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    char arr[MAX_ARRAY_SIZE][MAX_STRING_LENGTH];

    
    printf("Nhap so luong chuoi: ");
    scanf("%d", &n);
    getchar(); 

 
    for (int i = 0; i < n; i++) {
        printf("Nhap chuoi thu %d: ", i + 1);
        fgets(arr[i], MAX_STRING_LENGTH, stdin);
        
        size_t len = strlen(arr[i]);
        if (len > 0 && arr[i][len - 1] == '\n') {
            arr[i][len - 1] = '\0';
        }
    }

   
    printf("Cac chuoi chua toan ky tu so:\n");
    for (int i = 0; i < n; i++) {
        if (isAllDigits(arr[i])) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}


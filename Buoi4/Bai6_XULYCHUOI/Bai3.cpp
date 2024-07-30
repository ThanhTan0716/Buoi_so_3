#include <stdio.h>
#include <string.h>
#include <ctype.h>


void chuanHoaChuoi(char *str) {
    int len = strlen(str);
    int index = 0;
    int i = 0;

   
    while (i < len && isspace(str[i])) {
        i++;
    }

    
    while (i < len) {
   
        while (i < len && !isspace(str[i])) {
            str[index++] = str[i++];
        }

      
        while (i < len && isspace(str[i])) {
            i++;
        }

       
        if (i < len) {
            str[index++] = ' ';
        }
    }

 
    if (index > 0 && str[index - 1] == ' ') {
        index--;
    }

  
    str[index] = '\0';
}

int main() {
    char str[1000];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Chuoi truoc khi chuan hoa: \"%s\"\n", str);
    
    chuanHoaChuoi(str);

    printf("Chuoi sau khi chuan hoa: \"%s\"\n", str);

    return 0;
}



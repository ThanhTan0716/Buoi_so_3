#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int min(int a, int b, int c) {
    if (a < b)
        return (a < c) ? a : c;
    else
        return (b < c) ? b : c;
}

int levenshteinDistance(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int **d = (int **)malloc((len1 + 1) * sizeof(int *));
    
    for (int i = 0; i <= len1; i++)
        d[i] = (int *)malloc((len2 + 1) * sizeof(int));
    
    for (int i = 0; i <= len1; i++)
        d[i][0] = i;
    for (int j = 0; j <= len2; j++)
        d[0][j] = j;
    
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            int cost = (s1[i - 1] == s2[j - 1]) ? 0 : 1;
            d[i][j] = min(d[i - 1][j] + 1,    
                          d[i][j - 1] + 1,    
                          d[i - 1][j - 1] + cost); 
        }
    }
    
    int result = d[len1][len2];
    
    for (int i = 0; i <= len1; i++)
        free(d[i]);
    free(d);
    
    return result;
}

int main() {
    char s1[100], s2[100];
    
    printf("Nhap chuoi s1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; 
    
    printf("Nhap chuoi s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0'; 
    
    int distance = levenshteinDistance(s1, s2);
    
    printf("So phep bien doi toi thieu di chuyen s1 thanh s2 la: %d\n", distance);
    
    return 0;
}


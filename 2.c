#include <stdio.h>
#include <stdlib.h> 

void join(char* words[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s", words[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char* words[n];
    
    for (int i = 0; i < n; i++) {
        char* word = (char*)malloc(100 * sizeof(char)); // Выделяем память
        scanf("%s", word);
        words[i] = word;
    }
    
    join(words, n);
        for (int i = 0; i < n; i++) {// Освобождаем выделенную память для каждой строки
        free(words[i]);
    }
    
    return 0;
}

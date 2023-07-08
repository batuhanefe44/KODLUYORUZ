#include <stdio.h>
#include <string.h>

void FindWordsStartingWith(char words[][100], int size, char* prefix) {
    int i;
    int prefixLength = strlen(prefix);
    
    printf("Belirli metinden baslayan kelimeler: ");
    
    for (i = 0; i < size; i++) {
        if (strncmp(words[i], prefix, prefixLength) == 0) {
            printf("%s ", words[i]);
        }
    }
    
    printf("\n");
}

int main() {
    char words[][100] = {
        "apple", "banana", "apricot", "orange", "pineapple", "apartment", "apex"
    };
    int size = sizeof(words) / sizeof(words[0]);
    char prefix[100];
    
    printf("Belirli metni girin: ");
    fgets(prefix, sizeof(prefix), stdin);
    
    // Son satýrda kalan yeni satýr karakterini (\n) kaldýrma
    if (prefix[strlen(prefix) - 1] == '\n') {
        prefix[strlen(prefix) - 1] = '\0';
    }
    
    FindWordsStartingWith(words, size, prefix);
    
    return 0;
}

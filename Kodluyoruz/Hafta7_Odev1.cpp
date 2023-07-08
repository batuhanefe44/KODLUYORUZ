#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    
    printf("Bir kelime veya cumle girin: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Son satýrda kalan yeni satýr karakterini (\n) kaldýrma
    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }
    
    int length = strlen(sentence);
    
    printf("Girilen kelimenin/cumlenin uzunlugu: %d\n", length);
    
    return 0;
}

#include <stdio.h>

int main() {
    FILE *file;
    char text[100];
    
    // Dosyayý yazma modunda aç
    file = fopen("metin.txt", "w");
    
    if (file == NULL) {
        printf("Dosya olusturulamadi.");
        return 1;
    }
    
    printf("Metin girin: ");
    fgets(text, sizeof(text), stdin);
    
    // Dosyaya metni yaz
    fprintf(file, "%s", text);
    
    // Dosyayý kapat
    fclose(file);
    
    // Dosyayý okuma modunda aç
    file = fopen("metin.txt", "r");
    
    if (file == NULL) {
        printf("Dosya acilamadi.");
        return 1;
    }
    
    printf("Dosyanin icerigi:\n");
    
    // Dosyanýn sonuna kadar oku ve ekrana yazdýr
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }
    
    // Dosyayý kapat
    fclose(file);
    
    return 0;
}

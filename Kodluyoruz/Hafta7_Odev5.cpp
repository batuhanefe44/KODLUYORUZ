#include <stdio.h>

int main() {
    FILE *file;
    char text[100];
    
    // Dosyay� yazma modunda a�
    file = fopen("metin.txt", "w");
    
    if (file == NULL) {
        printf("Dosya olusturulamadi.");
        return 1;
    }
    
    printf("Metin girin: ");
    fgets(text, sizeof(text), stdin);
    
    // Dosyaya metni yaz
    fprintf(file, "%s", text);
    
    // Dosyay� kapat
    fclose(file);
    
    // Dosyay� okuma modunda a�
    file = fopen("metin.txt", "r");
    
    if (file == NULL) {
        printf("Dosya acilamadi.");
        return 1;
    }
    
    printf("Dosyanin icerigi:\n");
    
    // Dosyan�n sonuna kadar oku ve ekrana yazd�r
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }
    
    // Dosyay� kapat
    fclose(file);
    
    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1; // ptr1 num1'in adresini tutar
    ptr2 = &num2; // ptr2 num2'nin adresini tutar

    printf("Birinci sayiyi girin: ");
    scanf("%d", ptr1);

    printf("Ikinci sayiyi girin: ");
    scanf("%d", ptr2);

    printf("Birinci sayi: %d\n", *ptr1); // ptr1'in iþaret ettiði deðeri yazdýrýr
    printf("Ikinci sayi: %d\n", *ptr2); // ptr2'nin iþaret ettiði deðeri yazdýrýr

    return 0;
}

#include <stdio.h>

int FindMaxNumber(int arr[], int size) {
    int max = arr[0];
    int i;
    
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int size, i;
    
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Dizinin elemanlarini girin:\n");
    for (i = 0; i < size; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int maxNumber = FindMaxNumber(arr, size);
    
    printf("Dizinin en buyuk sayisi: %d\n", maxNumber);
    
    return 0;
}

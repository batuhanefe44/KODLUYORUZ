#include <stdio.h>

void FindDuplicateElements(int arr[], int size) {
    int i, j;
    
    printf("Tekrar eden elemanlar: ");
    
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    
    printf("\n");
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
    
    FindDuplicateElements(arr, size);
    
    return 0;
}

#include <stdio.h>

unsigned long long CalculateFactorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * CalculateFactorial(n - 1);
    }
}

int main() {
    unsigned int number;
    
    printf("Bir sayi girin: ");
    scanf("%u", &number);
    
    unsigned long long factorial = CalculateFactorial(number);
    
    printf("%u! = %llu\n", number, factorial);
    
    return 0;
}

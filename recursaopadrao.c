#include <stdio.h>

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base
    }
    return n * fatorial(n - 1); // Passo recursivo
}

int main() {
    int num = 5;
    printf("Fatorial de %d é %d\n", num, fatorial(num));
    return 0;
}

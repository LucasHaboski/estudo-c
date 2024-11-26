#include <stdio.h>

// Função auxiliar para implementar a recursão de cauda
int fatorialTailRec(int n, int acumulador) {
    if (n == 0 || n == 1) {
        return acumulador; // Caso base
    }
    return fatorialTailRec(n - 1, n * acumulador); // Passo recursivo
}

// Função principal para chamar a versão com recursão de cauda
int fatorial(int n) {
    return fatorialTailRec(n, 1); // Inicializar o acumulador com 1
}

int main() {
    int num = 5;
    printf("Fatorial de %d é %d\n", num, fatorial(num));
    return 0;
}

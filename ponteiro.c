#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x; // Ponteiro para o endereço de x

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor armazenado em ptr: %p\n", ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);

    *ptr = 20; // Alterar o valor de x usando o ponteiro
    printf("Novo valor de x: %d\n", x);

    return 0;
}

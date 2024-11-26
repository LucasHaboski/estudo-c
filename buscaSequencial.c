#include <stdio.h>

int buscaSequencial(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Retorna o índice onde o elemento foi encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;

    int resultado = buscaSequencial(arr, n, x);
    if (resultado != -1) {
        printf("Elemento encontrado no índice %d.\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}

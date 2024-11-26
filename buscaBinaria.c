#include <stdio.h>

int buscaBinaria(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid; // Elemento encontrado
        } else if (arr[mid] < x) {
            low = mid + 1; // Procure no lado direito
        } else {
            high = mid - 1; // Procure no lado esquerdo
        }
    }
    return -1; // Elemento não encontrado
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Array já ordenado
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;

    int resultado = buscaBinaria(arr, 0, n - 1, x);
    if (resultado != -1) {
        printf("Elemento encontrado no índice %d.\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}

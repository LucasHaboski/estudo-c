#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr = (int *)calloc(n, sizeof(int)); // Alocar memória
    if (arr == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Array alocado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Liberar memória
    return 0;
}

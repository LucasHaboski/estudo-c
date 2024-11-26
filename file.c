#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x, y, z;

    FILE *file;
    file = fopen("num.txt", "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fscanf(file, "%d %d %d", &x, &y, &z);

    printf("%d %d %d\n", x, y, z);

    fclose(file);

    return 0;
}

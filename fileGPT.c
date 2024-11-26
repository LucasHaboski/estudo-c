#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w"); // Abrir para escrita
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fprintf(file, "Olá, Arquivo!\n");
    fclose(file); // Fechar o arquivo

    // Abrir para leitura
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file); // Fechar o arquivo

    return 0;
}

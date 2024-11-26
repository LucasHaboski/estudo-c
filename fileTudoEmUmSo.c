#include <stdio.h>
#include <string.h>

int main() {
    // 1. Criar e escrever no arquivo
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }
    fprintf(file, "Linha 1: Olá, Arquivo!\n");
    fprintf(file, "Linha 2: Mais uma linha.\n");
    fclose(file); // Fechar o arquivo

    // 2. Buscar conteúdo no arquivo
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    char line[100];
    char busca[] = "Mais uma linha";
    int encontrado = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        if (strstr(line, busca) != NULL) { // Verifica se a linha contém o texto buscado
            printf("Encontrado: %s", line);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Texto '%s' não encontrado no arquivo.\n", busca);
    }
    fclose(file); // Fechar o arquivo

    // 3. Adicionar conteúdo ao final do arquivo
    file = fopen("example.txt", "a"); // Abrir em modo append
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para append.\n");
        return 1;
    }
    fprintf(file, "Linha 3: Adicionando mais texto ao arquivo.\n");
    fclose(file); // Fechar o arquivo

    // Mostrar o conteúdo final do arquivo
    printf("\nConteúdo final do arquivo:\n");
    file = fopen("example.txt", "r");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file;
    file = fopen("teste.txt", "r");

    // file = fopen("teste.txt", "w");
    //fprintf(file, "gigantesco nome em\n");

    // file = fopen("teste.txt", "a");
    // char frase[] = "enorme\n";
    // fputs(frase, file);
    
    // fclose(file);
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char frase[100];

    while(fgets(frase, 100, file) != NULL) {
        printf("%s", frase);
    }

    fclose(file);

    return 0;
}

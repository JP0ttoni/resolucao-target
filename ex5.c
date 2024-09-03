#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100  // Define o tamanho máximo da string

void inverterString(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    while (inicio < fim) {
        // Troca os caracteres
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Move os índices para o meio
        inicio++;
        fim--;
    }
}

int main() {
    char str[MAX_LENGTH];

    printf("Digite uma string (maximo %d caracteres): ", MAX_LENGTH - 1);
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha, se presente
    str[strcspn(str, "\n")] = '\0';

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}

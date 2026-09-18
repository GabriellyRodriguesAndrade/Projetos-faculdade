#include <stdio.h>
#include <string.h>
#include <ctype.h>

    int main() {
        char frase [50] , auxMai[50], auxMin[50];
        int tamanho, i;
        gets(frase);
        tamanho = strlen(frase);

        for (i = 0; i <= tamanho; i++){
            auxMai[i] = toupper(frase[i]);
             auxMin[i] = tolower(frase[i]);

        }
        printf("%s\n", auxMai);
        printf("%s\n", auxMin);
        printf("%s", frase);
        }

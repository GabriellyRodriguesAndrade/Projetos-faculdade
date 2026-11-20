#include <stdio.h> 
#include <string.h>

typedef struct _saiyajin {
    char nome[20];
    float ataque;
    int vida;
} saiyajin;

int main() {
    saiyajin s1, s2;

    strcpy(s1.nome, "Gohan");
    s1.ataque = 15.0f;
    s1.vida = 200;

    strcpy(s2.nome, "Broly");
    s2.ataque = 45.0f;
    s2.vida = 100;

    printf("Atributos Saiyajins\n");
    printf("%s tem ataque %.1f\n", s1.nome, s1.ataque);
    printf("%s tem ataque %.1f\n", s2.nome, s2.ataque);

    while (s1.vida > 0 && s2.vida > 0){
    s1.vida -= s2.ataque;
    printf("Nova vida do gohan %d\n", s1.vida);
    s2.vida -= s1.ataque;
    printf("Nova vida do Broly %d\n", s2.vida);
    }
    if(s1.vida > s2.vida){
        printf("%s Ganhou");
    }
    
    return 0;
}
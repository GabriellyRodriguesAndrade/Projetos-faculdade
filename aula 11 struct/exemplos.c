
#include <stdio.h>
// #include <string.h>


// struct _saiyajin {
//     char nome[20];
//     int idade;
//     float poderDeLuta;
//     char transformacao[20]; 
//     char planetaOrigem[20];
//     char cauda; // 'S' para Sim ou 'N' para não
// } saiyajin;

    //Atributo valores utilizando strcpy (da biblioteca string.h)
//     strcpy(saiyajin.nome, "Vegasar");
//     saiyajin.idade =30;
//     saiyajin.poderDeLuta = 7313.5f;
//     strcpy(saiyajin.transformacao, "Super Saiyajin");
//     strcpy(saiyajin.planetaOrigem, "Vegeta");
//     saiyajin.cauda = 'N';


//     //Exibindo os atributos armazenados na struct
//     printf("--- FICHA DE SAIYAJIN ---\n");
//     printf("Nome: %s\n", saiyajin.nome);
//     printf("Idade: %d anos\n", saiyajin.idade);
//     printf("Poder de Luta: %.1f\n", saiyajin.poderDeLuta);
//     printf("Transformacao: %s\n", saiyajin.transformacao);
//     printf("Planeta de Origem: %s\n", saiyajin.planetaOrigem);
//     printf("Possui cauda?: %c\n", saiyajin.cauda);
//     return 0;
// }

typedef struct _ponto{
    int x;
    int y;
}ponto;
int main(){
    ponto p1, p2, p3;
    p1.x = 10;
    p2.x = p1.x + 5;
    printf("%d", p2.x);

    return 0;
}
 
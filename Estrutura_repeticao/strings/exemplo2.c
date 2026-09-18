#include <stdio.h>
#include <string.h>

// int main(){
//     char nome[50];
//     printf("Insira nome completo: \n");
//     scanf("%s", nome);
//     printf("Ola, %s", nome);
//     return 0;

// }

// int main(){
//     char nome[50];
//     printf("Insira nome completo: \n");
//     gets(nome);
//     printf("Ola, %s", nome);
//     return 0;

// }
// int main(){
//     char texto[50];
//     fgets(texto, 50, stdin);
   
//     printf("frase fornecida, %s", texto);
//     return 0;

// }
// int main(){
//     char texto[] = "engenharia";
    // size_t tamanho

//     tamanho = strlen(texto);
//     printf("Tamanho do text: %d", tamanho);

//     return 0;
// }
    int main(){
        char senha_correta[]= "admin123";
        char senha_digitada[20];

        printf("digite a senha: \n");

        scanf("%s", senha_digitada);

        if(strcmp(senha_correta, senha_digitada) ==0){
            printf("senha correta");
        }else{n  
            printf("senha incorreta");
        }
        return 0;
    }
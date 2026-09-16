#include <stdio.h>

    int main () {
    int idade ;
    int soma = 0; 
    int quantidade = 0;


    while(scanf("%d", & idade) == 1) {

        if ( idade < 0) {
        break; 
                        }

    soma += idade ;
    quantidade ++;
}


    if ( quantidade > 0) {
        double media = ( double ) soma / quantidade;
        printf ("%.2f\n", media);
                        }

 return 0;
 }
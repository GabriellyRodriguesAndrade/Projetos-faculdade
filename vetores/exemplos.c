// #include <stdio.h>

// int main (){

//     int V[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};

//     for(int i = 0; i < 10; i ++){
//         printf("%d", V[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float vetNotas[5], media=0;
//     int ind;
//     // Imput das notas no vetNotas[]
//     for(ind=0; ind <5; ind++){
//         printf("Digite o valor da nota: \n");
//         scanf("%f", &vetNotas[ind]); //Local de armazenamento
//     }
    
//     //Cálculo da média
//     for (ind=0; ind <5; ind++){
//         media += vetNotas[ind];
//     }
//     media = media /5;
//     printf("%.2f", media);
//     return 0;
// }
#include <stdio.h>
int main(){
    int aluNotas[5][3], media;
    int indalu, indnot;
    int matriz[5][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}}
    for (indalu=0; indalu<5; indalu++){
    media = 0;
        for(indnot=0; indnot<3; indnot++){
        media +=aluNotas[indalu][indnot];
        }
    
    media = media/3
    }
    return 0;
}

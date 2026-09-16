 #include <stdio.h>

 int main () {

 double NOTA ;
 double soma_notas = 0.0; 
 int notas_validas = 0; 

 while ( notas_validas < 2) {
    scanf ("%lf", & NOTA );

 if ( NOTA >= 0.0 && NOTA <= 10.0) {
    soma_notas += NOTA ; 
        notas_validas ++; 
    } else{

    printf ("nota invalida \n");
            }   
                            }


 double media = soma_notas / 2.0;
 printf ("media = %.2f\n", media);



 return 0;
 }
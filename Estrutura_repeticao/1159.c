 #include <stdio.h>

 int main() {
 int X ;


 while (scanf("%d", & X ) == 1 && X != 0) {
 int soma = 0; 

   if ( X % 2 != 0) {
        X ++;
                    }


    for ( int i = 0; i < 5; i ++) {
        soma += X ; 
        X += 2;
                                  }

    printf ("%d\n", soma ) ;
                                          }

    return 0;
 }
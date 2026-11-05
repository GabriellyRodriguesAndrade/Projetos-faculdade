#include <stdio.h>
 int main(){
    int A [4][3] = {{1,2,3},{5,6,7},{9,10,11},{13,14,15}};
    int B [4][3] = {{1,2,3},{5,6,7},{9,10,11},{13,14,15}};
    int C [4][3];

    for(int i = 0; i < 4; i++){
        for (int j = 0; j< 3; j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("%d", C[i][j]);
        }
        printf("\n");
    return 0;
    }
}

      


    
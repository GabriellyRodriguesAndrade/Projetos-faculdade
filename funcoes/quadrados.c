#include <math.h>
float calc_Cateto_a(float x1, float x2);
float calc_Cateto_b(float y1, float y2);
float calc_Hipotenusa(float x, float y);
int main(){
    float catx1 =2;
    float catx2 =3;
    float catx3 =4;
    float catx4 =6;
    float cata = calc_cateto_a(catx1, catx2);
printf("%f", cata);
    
    
}

float calc_cateto_a(float x1, float x2){
    float result = (x2 - x1);
    return result;
}
float calc_cateto_b(float y1, float y2){
    float result = (y2 - y1);
    return result;
}
float calc_Hipotenusa(float x, float y){
    float hipotenusa = ((pow(x, 2) + (pow(y,2)));
    return hipotenusa;
}

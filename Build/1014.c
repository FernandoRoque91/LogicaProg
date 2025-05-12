#include <stdio.h>

/// Fernando Roque França
/// 22504065

int main (){
    int X;
    float Y;
    double consumo;
    scanf ("%d", &X);
    scanf ("%f", &Y);
    consumo = (X)/Y;
    printf ("Consumo médio %.3f" , consumo , " km/l\n");

    return 0;

}
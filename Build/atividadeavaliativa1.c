#include <stdio.h>
/// Fernando Roque Franca
/// RA 22504065

int main () {
    float A, B, C;
    float Media;
    printf ("Insira A: ");
    scanf ("%f" , &A);
    printf ("Insira B: ");
    scanf ("%f" , &B);
    printf ("Insira C: ");
    scanf ("%f" , &C);
    Media = (A * 2 + B * 3 + C * 5)/10;
    printf ("MEDIA = %.5f\n", Media);

    return 0;



}
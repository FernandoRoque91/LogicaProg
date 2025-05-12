#include <stdio.h>

int main (){
    int hora_inicial, minuto_inicial, hora_final, 
    minuto_final, duracaoHrs, duracaoMin;
    scanf ("%d %d", &hora_inicial, &minuto_inicial);
    scanf ("%d %d", &hora_final, &minuto_final);
    duracaoHrs = (hora_final-hora_inicial);
    duracaoMin = (minuto_final-minuto_inicial);
    printf ("O JOGO DUROU %d",duracaoHrs,"HORA(S) E %d", duracaoMin, "MINUTO(S)");
    return 0;
}
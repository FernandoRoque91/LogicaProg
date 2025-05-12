#include <stdio.h>

int main (){
    float salarioAtual, salarioNovo;
    scanf("%f" &salarioAtual);
    if(salarioAtual >= 0 && salarioAtual <= 400.00) {
        salarioNovo = (salarioAtual*0.15)+salarioAtual;
    }
    else if(salarioAtual >= 400.01 && salarioAtual <= 800.00){
        salarioNovo = (salarioAtual*0.12)+salarioAtual;
    }
    else if(salarioAtual>=800.01 && salarioAtual<=1200.00){
        salarioNovo = (salarioAtual*0.10)+salarioAtual;
    }
    else if(salarioAtual>1200.01 && salarioAtual<=2000.00){
        salarioNovo = (salarioAtual*0.07)+salarioAtual;
    }
    else if(salarioAtual>1200.01 && salarioAtual<=2000.00){
        salarioNovo = (salarioAtual*0.07)+salarioAtual;
    }
}
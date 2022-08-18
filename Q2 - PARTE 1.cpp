// GUILHERME FELIPPE DA SILVA BOIKO 2122361BCC
// DISCIPLINA DE MATEMÁTICA DISCRETA

// QUESTÃO 2:



// T(0) = 1;
// T(b,n) = 1 + T(b,n-1);
// A implementação não-recursiva se mostrou 




//Função potência usando recursividade

#include <iostream>
#include <stdio.h>
using namespace std;


int potencia(int n1, int n2);
int main() 
{
    int base, a, resultado;
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente, sendo ele um inteiro positivo: ";
    cin >> a;
    resultado = potencia(base, a);
    cout << resultado;
    return 0;
}

int potencia(int base, int a) {
    if (a != 0)
        return (base * potencia(base, a - 1));
    else
        return 1;
}



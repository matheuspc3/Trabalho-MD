
// QUESTÃO 2:



// X(0) = 1; X(n) = X * X(n-1) ;
// A implementação recursiva se mostrou menos eficiente pois para cada chamada de uma função, recursiva ou não, os parâmetros e as variáveis locais são empilhados na pilha de execução.





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



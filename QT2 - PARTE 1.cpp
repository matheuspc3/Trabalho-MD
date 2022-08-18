// DISCIPLINA DE MATEMÁTICA DISCRETA
// Integrantes: Guilherme Felippe da Silva Boiko, Matheus Pereira de Carvalho, Rafael Chagas Carvalho, Lucas Pereira da Silva

// QUESTÃO 2:

// X(0) = 1; X(n) = X * X(n-1) ;
// A implementação não-recursiva/iterativa é a mais eficiente. O algoritmo recursivo embora mais compacto e claro, se mostra ineficiente por fazer uso intensivo da pilha (procedimentos reentrantes) 
// ao registar o estado atual do processamento, o que torna a implementação recursiva nesse caso específico mais lenta.




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



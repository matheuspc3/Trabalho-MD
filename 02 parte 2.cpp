// DISCIPLINA DE MATEMÁTICA DISCRETA
// Integrantes: Guilherme Felippe da Silva Boiko, Matheus Pereira de Carvalho, Rafael Chagas Carvalho, Lucas Pereira da Silva


// QUESTÃO 2:
// Função potência não-recursiva

#include <iostream>
using namespace std;

int main() 
{
    int a;
    float base, resultado = 1;

    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente (inteiro positivo)";
    cin >> a;
    
    cout << base << "^" << a << " = ";

    while (a != 0) {
        resultado *= base;
        --a;
    }

    cout << resultado;
    
    return 0;
}

// DISCIPLINA DE MATEMÁTICA DISCRETA
// Integrantes: Guilherme Felippe da Silva Boiko, Matheus Pereira de Carvalho, Rafael Chagas Carvalho, Lucas Pereira da Silva

// QUESTÃO 1:

// a) É uma função recursiva que imprime a sequencia fibonacci de n numeros
// b) A ordem de complexidade é o(n), pois há apenas um loop for podendo varias até n numeros apenas
// c) O melhor código é o do loop, pois independente de qual seja o valor de n, a quantidade de operações matemáticas realizadas será sempre a mesma. O contrario na recurvisa que precisaria de muito mais poder computacional, pois as funções sao impilhadas e desempilhadas.

#include <iostream>
using namespace std;

int fib(int n){
    int t1 = 0, t2 = 1, proxTermo = 0;
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        proxTermo = t1 + t2;
        t1 = t2;
        t2 = proxTermo;

        cout << proxTermo << ", ";
    }
    return 0;
}

int main() {
    int n;
    cout << "Insira um número inteiro: ";
    cin >> n;

    cout << "Sequencia Fibonacci: ";
    fib(n);
    return 0;
}


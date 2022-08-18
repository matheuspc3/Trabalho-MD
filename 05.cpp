// DISCIPLINA DE MATEMÁTICA DISCRETA
// Integrantes: Guilherme Felippe da Silva Boiko, Matheus Pereira de Carvalho, Rafael Chagas Carvalho, Lucas Pereira da Silva

// QUESTÃO 5:

#include <iostream>
#include <math.h>
using namespace std;
int DIV(int x, int y){
  if(fabs(x) > fabs(y))
    return (1+DIV(fabs(x)-fabs(y),fabs(y)));
  if(fabs(x) < fabs(y))
    return 0;
  if(fabs(x) == fabs(y))
    return 1;
  if(y==0)
      return -1;
}
int main() { 
  int x=127;
  int y=2;
  cout << DIV(x,y);



}

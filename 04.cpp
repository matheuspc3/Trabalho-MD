// DISCIPLINA DE MATEMÁTICA DISCRETA
// Integrantes: Guilherme Felippe da Silva Boiko, Matheus Pereira de Carvalho, Rafael Chagas Carvalho, Lucas Pereira da Silva

// QUESTÃO 4:

#include <iostream>
#include <math.h>
using namespace std;
int MOD(int x, int y){
  if(fabs(x) > fabs(y))
    return MOD(fabs(x)-fabs(y),fabs(y));
  if(fabs(x) < fabs(y))
    return fabs(x);
  if(fabs(x) == fabs(y))
    return 0;
  if(y==0)
      return -1;
}
int main() { 
  int x=-50;
  int y=2;
  cout << MOD(x,y);
  
}

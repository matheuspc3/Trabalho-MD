// DISCIPLINA DE MATEMÁTICA DISCRETA
// Integrantes: Guilherme Felippe da Silva Boiko, Matheus Pereira de Carvalho, Rafael Chagas Carvalho, Lucas Pereira da Silva

//QUESTÃO 3:

#include <iostream>
using namespace std;

int convert(int num){
	if (num == 0)
		return 0;
	else
		return (num % 2 + 10 *convert(num / 2));
}

int main(){
	int num;
  cout << "Insira um num inteiro: ";
  cin >> num;
  cout << convert(num) << endl;
	return 0;
}

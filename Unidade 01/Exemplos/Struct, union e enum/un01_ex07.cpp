// Estrutura Union - un01_ex07.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca padr�o de localiza��o de arquivos
#include <locale>

// Definindo constantes
#define GRAUS 'G'
#define RAD 'R'

// Acessa fun��es de bibliotecas padr�o
using namespace std;

// Declarando uma Union
union Angulo
{
	int graus;
	float radianos;
}; // Fim da union

// Fun��o principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	Angulo ang;
	char op;
	
	cout << "N�meros em graus ou em radianos? " << endl;
	cin >> op;
	
	if(op == GRAUS)
	{
		ang.graus = 180;
		cout << "�ngulo: " << ang.graus << endl;
	}
	else if(op == RAD)
	{
		ang.radianos = 3.1415;
		cout << "�ngulo: " << ang.radianos << endl;
	}
	else
	{
		cout << "Entrada Inv�lida!" << endl;
	}
	
	// Indica que a fun��o terminou com sucesso
	return 0;
}
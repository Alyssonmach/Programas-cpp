// Calculo de um ret�ngulo com uma classe - un02_ex02.cpp
// Usando construtores sem par�metros

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca de localiza��o de arquivos
#include <locale>

using namespace std;

// Definindo uma classe
class Retangulo
{
	// Definindo um especificador de acesso a membros private
	private:
		int x, y; // Membro de dados da classe
    // Definindo um especificador de acesso a membros private
    public:
    	// Definindo um construtor para a classe
    	Retangulo(void);
    	void setValores(int, int); // Membro de fun��es da classe
    	int getX(void); // Membro de fun��es da classe
    	int getY(void); // Membro de fun��es da classe
    	int getArea(void); // Membro de fun��es da classe
}; // Fim da classe

// Implementando o construtor da classe
Retangulo::Retangulo(void)
{
	x = y = 0;
}

// Implementa��o dos m�todos da classe
void Retangulo::setValores(int a, int b)
{
	x = a;
	y = b;
}

// Implementa��o dos m�todos da classe
int Retangulo::getX(void)
{
	return x;
}

// Implementa��o dos m�todos da classe
int Retangulo::getY(void)
{
	return y;
}

// Implementa��o dos m�todos da classe
int Retangulo::getArea(void)
{
	return x*y;
}

// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Definindo um objeto ou inst�ncia de uma classe
	Retangulo valores;
	int a, b;
	
	cout << "Programa que calcula a �rea de um tri�ngulo." << endl << endl;
	
	cout << "Entre com o valor maior do ret�ngulo: ";
	cin >> a;
	
	cout << "Entre com o valor menor do ret�ngulo: ";
	cin >> b;
	
	valores.setValores(a, b);
	
	cout << "O ret�ngulo cujos lado s�o " << valores.getX() << " u.c e ";
	cout << valores.getY() << " u.c, possui uma �rea de " << valores.getArea();
	cout << " u.c." << endl;
	return 0;	
}


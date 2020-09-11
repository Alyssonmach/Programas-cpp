// Programa que simula um caixa ATM - un02_lab06.cpp
// Aluno: Alysson Machado de Oliveira Barbosa
// Matr�cula: 119110236

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca  de localiza��o de arquivos
#include <locale>
// Biblioteca de manipula��o com cadeias de caracteres
#include <string>
// Biblioteca de manipula��o de dados
#include <iomanip>

// Acessa as fun��es das bibliotecas padr�o
using namespace std;

// Definindo uma classe ContaBancaria
class ContaBancaria
{
	// Modificador de acesso private
	private:
		// Membro de Dados da classe
		string nome; 
		int conta; 
		float saldo; 
	// Modificador de acesso public	
    public:
    	// Membro de Fun��es da classe
    	ContaBancaria(string, int); 
    	void setNome(string); 
    	void setConta(int); 
    	void setSaldo(float);
    	string getNome(void);
    	int getConta(void);
    	float getSaldo(void);
    	void saque(float);
    	void deposito(float);
};

// Definindo um construtor para a classe 
ContaBancaria::ContaBancaria(string nome_pessoal, int conta_bancaria)
{
	nome = nome_pessoal;
	conta = conta_bancaria;
	saldo = 0.0;
}

// Implementa��o dos m�todos da classe
void ContaBancaria::setNome(string nome_pessoal)
{
	nome = nome_pessoal;
}
void ContaBancaria::setConta(int conta_bancaria)
{
	conta = conta_bancaria;
}
void ContaBancaria::setSaldo(float saldo_bancario)
{
	saldo = saldo_bancario;
}
string ContaBancaria::getNome(void)
{
	return nome;
}
int ContaBancaria::getConta(void)
{
	return conta;
}
float ContaBancaria::getSaldo(void)
{
	return saldo;
}
void ContaBancaria::saque(float quantia)
{
	if(getSaldo() >= quantia && quantia >= 0)
		setSaldo(saldo - quantia);
}
void ContaBancaria::deposito(float quantia)
{
	if(quantia >= 0)
		setSaldo(saldo + quantia);
}

// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Definindo inst�ncias ou objetos da classe
	ContaBancaria pessoa1("Alysson Machado", 123456);
	ContaBancaria pessoa2("Francinildo Figueiredo", 654321);
	
	cout << fixed << setprecision(2);
	
	// Obtendo os dados dos objetos da classe com as fun��es get
	cout << "Nome do usu�rio 1: " << pessoa1.getNome() << endl;
	cout << "Conta do usu�rio 1: " << pessoa1.getConta() << endl;
	cout << "Saldo do usu�rio 1: " << pessoa1.getSaldo() << " R$" << endl << endl;
	
	cout << "Nome do usu�rio 2: " << pessoa2.getNome() << endl;
	cout << "Conta do usu�rio 2: " << pessoa2.getConta() << endl;
	cout << "Saldo do usu�rio 2: " << pessoa2.getSaldo() << " R$" << endl << endl;
	
	// Modificando membros de dados da classe atrav�s de fun��es membro
	pessoa1.deposito(20.0);
	pessoa2.deposito(30.0);
	
	// Obtendo os dados dos objetos da classe com as fun��es get
	cout << "Saldo do usu�rio 1 depois do dep�sito: " << pessoa1.getSaldo() << " R$" << endl;
	cout << "Saldo do usu�rio 2 depois do dep�sito: " << pessoa2.getSaldo() << " R$" << endl << endl;
	
	// Modificando membros de dados da classe atrav�s de fun��es membro
	pessoa1.saque(50.0);
	pessoa2.saque(10.0);
	
	// Obtendo os dados dos objetos da classe com as fun��es get
	cout << "Saldo do usu�rio 1 depois do saque: " << pessoa1.getSaldo() << " R$" << endl;
	cout << "Saldo do usu�rio 2 depois do saque: " << pessoa2.getSaldo() << " R$" << endl;
	
	return 0;
}
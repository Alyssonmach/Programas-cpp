// Programa que simula um caixa ATM - un02_lab06.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca  de localiza��o de arquivos
#include <locale>
// Biblioteca de manipula��o com cadeias de caracteres
#include <string>
// Biblioteca de manipula��o de dados
#include <iomanip>
// Biblioteca para controle de processos
#include <cstdlib>

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
    	void menuATM(void);
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

void ContaBancaria::menuATM(void)
{
	
	string nome_usuario;
	int conta_usuario, opcao;
	float quantia;
	
	cout << "=== Banco Intermares ===" << endl << endl;
	
	cout << "Nome do usu�rio: ";
	getline(cin, nome_usuario);
	cout << "N�mero da conta: ";
	cin >> conta_usuario;
	
	setNome(nome_usuario);
	setConta(conta_usuario);
	
	system("pause");
	system("cls");
	
	do
	{
		cout << "=== Banco Intermares ===" << endl << endl;
		
		cout << "Bem-vindo " << getNome() << "." << endl << endl;
		cout << "Escolha uma opera��o: " << endl << endl;
		cout << "1. Consulta ao saldo" << endl;
		cout << "2. Realizar dep�sito na conta" << endl;
		cout << "3. Realizar saque na conta" << endl;
		cout << "0. Finalizar sess�o" << endl << endl;
		cout << "Escolha uma opera��o: ";
		cin >> opcao;
		
		system("pause");
		system("cls");
		
		if(opcao == 0)
		{
			cout << "=== Banco Intermares ===" << endl << endl;
			
			cout << "Opera��o Finalizada. Volte sempre " << getNome() << "." << endl;
		}
		else if(opcao == 1)
		{
			cout << "=== Banco Intermares ===" << endl << endl;
			
			cout << "N�mero da conta: " << getConta() << endl;
			cout << "Saldo atual: " << getSaldo() << " R$" << endl;
		}
		else if(opcao == 2)
		{
			cout << "=== Banco Intermares ===" << endl << endl;
			
			cout << "Informe uma quantia a ser depositada na conta: ";
			cin >> quantia;
			
			if(quantia >= 0)
			{
				cout << "Dep�sito realizado com sucesso." << endl;
				deposito(quantia);
			}
			else
			{
				cout << "Dep�sito n�o autorizado." << endl;
			}
			
			
			cout << "N�mero da conta: " << getConta() << endl;
			cout << "Saldo atual: " << getSaldo() << " R$" << endl;
		}
		else if(opcao == 3)
		{
			cout << "=== Banco Intermares ===" << endl << endl;
			
			cout << "Informe uma quantia a ser sacada da conta: ";
			cin >> quantia;
			
			if(getSaldo() >= quantia && quantia >= 0)
			{
				saque(quantia);
				cout << "Saque realizado com sucesso." << endl;
			}
			else
			{
				cout << "Saque n�o autorizado." << endl;
			}
			
			cout << "N�mero da conta: " << getConta() << endl;
			cout << "Saldo atual: " << getSaldo() << " R$" << endl;
		}
		else
		{
			cout << "=== Banco Intermares ===" << endl << endl;
			
			cout << "Entrada inv�lida. Tente novamente!" << endl;
		}
		
		system("pause");
		system("cls");
		
	}while(opcao != 0);
}

// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Definindo inst�ncias ou objetos da classe
	ContaBancaria pessoa1("Alysson Machado", 123456);
	
	cout << fixed << setprecision(2);
	
	pessoa1.menuATM();
	
	return 0;
}
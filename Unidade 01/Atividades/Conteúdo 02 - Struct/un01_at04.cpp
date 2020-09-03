// Simula��o de sistema de banco - un01_at04.cpp

// Biblioteca padr�o para entrada e sa�da de dados
#include <iostream>
// Biblioteca padr�o para localiza��o de arquivos
#include <locale>
//Biblioteca padr�o de manipula��es de arquivos
#include <iomanip> 
// Biblioteca de prop�sitos gerais
#include <cstdlib>

// Definindo o n�mero de contas
#define NUM 20

// Acessa as fun��es das bibliotecas padr�o
using namespace std;

// Definindo uma struct
struct Saldo
{
	float dinheiro; // Atributo da struct
}; // Fim da struct

// Declarando os cabe�alhos das fun��es
void inicializador(Saldo [], int);
void consulta(Saldo [], int);
void saque(Saldo *, int);
void deposito(Saldo *, int);


// Fun��o principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando as contas na struct
	Saldo contas[NUM];
	
	// Vari�vel de controle do ATM e de n�mero da conta
	int opcao, numero_conta;
	
	// Inicializando as contas
	inicializador(contas, NUM);
	
	do
	{
		// Apresenta��o do programa ao usu�rio
		cout << "Caixa de Banco" << endl << endl;
		
		
		// Menu de op��es
		cout << fixed << setprecision(2);
		cout << "1 - Consulta ao Saldo" << endl; 
		cout << "2 - Realizar um Saque" << endl; 
		cout << "3 - Realizar um Dep�sito" << endl; 
		cout << "0 - Sair do programa" << endl; 
		
		// Recebe a escolha de acesso
		cout << "Informe a sua op��o: ";
		cin >> opcao;
		
		// Recebe o n�mero da conta do usu�rio
		if(opcao >= 1 && opcao <=3)
		{
			// Recebe a conta do usu�rio
			cout << "Informe sua conta: ";
			cin >> numero_conta;	
		}
		
		// Seleciona as escolhas do usu�rio
		if(opcao == 1)
		{
			consulta(contas, numero_conta);
		}
		else if(opcao == 2)
		{
			saque(contas, numero_conta);
		}
		else if(opcao == 3)
		{
			deposito(contas, numero_conta);
		}
		else
		{
			cout << "Processo Finalizado" << endl << endl;
			system("pause");
			system("cls");
		}
		
	}while(opcao != 0);
	
	// Indica que a fun��o terminou com sucesso
	return 0;
} // Fim da fun��o principal

// Fun��o para inicializar o saldo das contas
void inicializador(struct Saldo *contas, int num)
{
	// Definindo uma vari�vel para percorrer o vetor de contas
	int i;
	
	// Inicializando as contas
	for(i = 0; i < num; i++)
	{
		contas[i].dinheiro = 0;
	}
	 // Fun��o n�o retorna nenhum valor
	return;
}

// Fun��o para consulta do saldo banc�rio
void consulta(Saldo contas[], int numero_conta)
{
	// Imprime na sa�da de dados o saldo banc�rio
	cout << "Saldo Banc�rio: " << contas[numero_conta].dinheiro << endl << endl;
	system("pause");
	system("cls");
	
	// Fun��o n�o retorna nenhum valor
	return;
}

// Fun��o para saque banc�rio
void saque(struct Saldo *contas, int numero_conta)
{
	// Vari�vel que recebe a quantia a ser sacada
	float dinheiro_out;
	
	// Recebe do usu�rio o dinheiro de saque
	cout << "Informe a quantida de saque: ";
	cin >> dinheiro_out;
	
	// Remove o dinheiro da conta e imprime o novo saldo
	if(dinheiro_out < contas[numero_conta].dinheiro)
	{
		contas[numero_conta].dinheiro = contas[numero_conta].dinheiro - dinheiro_out;
		cout << "Saque realizado com sucesso." << endl;
		cout << "Novo Saldo: " << contas[numero_conta].dinheiro << " R$." << endl;
		system("pause");
		system("cls");
	}
	// Caso o dinheiro atual seja menor que o saque, processo n�o autorizado
	else
	{
		cout << "Voc� possui " << contas[numero_conta].dinheiro << " R$.";
		cout << "N�o � poss�vel realizar o saque de " << dinheiro_out << " R$." << endl;
		system("pause");
        system("cls");
    }	
	
	// Fun��o n�o retorna nenhum valor
	return;
}
// Fun��o para dep�sito banc�rio
void deposito(struct Saldo *contas, int numero_conta)
{
	// Vari�vel que recebe a quantia a ser depositada
	float dinheiro_in;
	
	// Recebe do usu�rio o dinheiro de saque
	cout << "Informe a quantida de dep�sito: ";
	cin >> dinheiro_in;

	contas[numero_conta].dinheiro = contas[numero_conta].dinheiro + dinheiro_in;
	cout << "Dep�sito realizado com sucesso." << endl;
	cout << "Novo Saldo: " << contas[numero_conta].dinheiro << " R$." << endl;
	system("pause");
	system("cls");
	  
	// Fun��o n�o retorna nenhum valor
	return;
}




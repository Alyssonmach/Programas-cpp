// Entrada de Dados - un01_ex03.cpp

// Biblioteca dos comandos padr�o de entrada e sa�da
#include <iostream>

// Biblioteca de localiza��o de programas
#include <locale>

// Pacote std define o conjunto de fun��es que ser� usado no
// programa, agrupando todas as bibliotecas de C++ pr�-definidas
using namespace std;

// Declarando a fun��o principal
int main()
{
	setlocale(LC_ALL, "portuguese"); // Padr�o de idioma brasileiro
	
	// inicializando as vari�veis
	int v1, v2, soma;
	
	cout << "Informe o primeiro valor: "; // Sa�da de dados para o usu�rio
	cin >> v1; // Solicita dados ao usu�rio
	
	cout << "Informe o segundo valor: "; // Sa�da de dados para o usu�rio
	cin >> v2; // Solicita dados ao usu�rio
	
	// atribuindo a soma "v1" e "v2" a vari�vel "soma"
	soma = v1 + v2;
	
	// Sa�da de dados para o usu�rio
	cout << "O valor da soma de " << v1 << " + " << v2 << " � " << soma << endl;
	
	// Imprimindo uma express�o aritm�tica para o usu�rio
	cout << "O resto da divis�o � " << v1 % v2 << endl;
	
	// Indica que o programa terminou com sucesso
	return 0; 
} // Fim da fun��o principal

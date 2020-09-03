// Resto da divis�o de dois n�meros - un01_at01.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca padr�o de localiza��o de arquivos
#include <locale>

// Pacote std define o conjunto de fun��es que ser� usado no
// programa, agrupando todas as bibliotecas de C++ pr�-definidas
using namespace std;

// Fun��o principal do programa
int main()
{
	// comfigurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando as vari�veis
	int num1, num2;
	
	// Sa�da de Dados
	cout << "Insira dois n�meros inteiros: "; 
	// Entrada de Dados
	cin >> num1 >> num2; 
	
	// Sa�da de Dados
	cout << "O resto da divis�o de " << num1 << " por " << num2 << " � ";
	cout << num1 % num2 << endl;
	 
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da fun��o principal
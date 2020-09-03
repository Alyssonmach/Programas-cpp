// Criando uma struct usando Arrays (melhorado) - un01_ex05_modificado.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca para manipula��o de strings
#include <string>
// Biblioteca padr�o de localiza��o de arquivos
#include <locale>

// Usa fun��es da biblioteca padr�o
using namespace std;

// Definindo uma struct
struct Produto
{
	string nome; // Atributo nome
	int numero; // Atributo numero
}; // Fim da struct

// Fun��o principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// inicializando as vari�veis da struct
	Produto produtos[10] = {{"Morango", 1}, {"Abobora", 2}, {"Verduras", 3}, {"Leite", 4}, {"Ab�bora", 5},
						 	{"Afofado", 6}, {"Risoto", 7}, {"Molhos", 8}, {"Desodorante", 9}, {"Pamonha", 10}};
	
	// Sa�da de dados do array de struct
	for(int i = 0; i < 10; i++)
	{
		cout << "Produto: " << produtos[i].nome << endl;
		cout << "N�mero: " << produtos[i].numero << endl << endl;
	}
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da fun��o principal

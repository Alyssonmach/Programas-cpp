// Criando uma struct usando Arrays - un01_ex05.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca para manipula��o de strings - un01_ex04.cpp
#include <string>
// Biblioteca padr�o de localiza��o de arquivos
#include <locale>

// Usa fun��es da biblioteca padr�o
using namespace std;

// Definindo uma constante
#define PROD 10

// Definindo uma struct
struct Produto
{
	string nome; // Atributo nome
	int numero; // Atributo numero
}; // Fim da struct

// Definindo um array de struct
struct Produto registrador[PROD];

// Fun��o principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando as vari�veis
	int i, copia;
	char produtos[10][50] = {"Morango", "Abobora", "Verduras", "Leite", 
                             "Ab�bora", "Afofado", "Risoto", "Molhos",
                             "Desodorante", "Pamonha"};
	
    // Interando os dados no array de struct
	for(i = 0; i < 10; i++)
	{
		copia = i;
		registrador[i].nome = produtos[i];
		registrador[i].numero = ++copia;	
	}
	
	// Sa�da de dados do array de struct
	for(i = 0; i < 10; i++)
	{
		cout << "Produto: " << registrador[i].nome << endl;
		cout << "N�mero: " << registrador[i].numero << endl << endl;
	}
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da fun��o principal
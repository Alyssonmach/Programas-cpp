// Criando uma struct - un01_ex04.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca para manipula��o de strings - un01_ex04.cpp
#include <string>
// Biblioteca padr�o de localiza��o de arquivos
#include <locale>

// Usa fun��es da biblioteca padr�o
using namespace std;

// Definindo uma struct
struct Aluno
{
	string nome;
	string curso;
	long int matricula;
	float cra;
}; // Fim da struct

// Fun��o principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando as vari�veis da struct
	Aluno alysson;
	Aluno *apont;
	
	// Modificando as vari�veis da struct
	alysson.nome = "Alysson Machado";
	alysson.curso = "Engenharia El�trica";
	alysson.matricula = 112344567;
	alysson.cra = 7.89;
	
	// Impress�o de dados na tela
	cout << "Os dados s�o: " << endl;
	cout << "Nome: " << alysson.nome << endl;
	cout << "Curso: " << alysson.curso << endl;
	cout << "Matr�cula: " << alysson.matricula << endl;
	cout << "CRA: " << alysson.cra << endl;
	
	// Definindo a vari�vel de mem�ria na qual o ponteiro aponta
	apont = &alysson;
	
	// Modificando a vari�vel da struct com um ponteiro
	apont -> cra = 9.00;
	
	cout << "O novo CRA �: " << alysson.cra << endl;
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da fun��o principal
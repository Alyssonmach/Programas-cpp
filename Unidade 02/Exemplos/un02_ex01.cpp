// Definindo uma classe pessoa - un02_ex01.cpp
// Usando construtor com par�metros

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca de localiza��o de arquivos
#include <locale>
// Biblioteca de uso com cadeias de caracteres
#include <string>

// Acessa as fun��es da biblioteca padr�o
using namespace std;

// Definindo uma classe
class Pessoa
{
	// Definindo um especificador de acesso a membros private
	private:
		string nome; // Membro de Dado
		int idade; // Membro de Dado
	// Definindo um especificador de acesso a membros private
    public:
    	Pessoa(string, int); // Construtor com par�metros
    	int getIdade(void); // Membro de fun��o para obten��o de valores
    	string getNome(void); // Membro de fun��o para obten��o de valores
    	void setIdade(int); // Membro de fun��o para atribui��o de valores
    	void setNome(string); // Membro de fun��o para atribui��o de valores
};

// Implementando o construtor da classe
Pessoa::Pessoa(string nome_pessoa, int idade_pessoa)
{
	nome = nome_pessoa;
	idade = idade_pessoa;
}

// Implementa��o dos m�todos da classe
int Pessoa::getIdade(void)
{
	return idade;
}

// Implementa��o dos m�todos da classe
string Pessoa::getNome(void)
{
	return nome;
}

// Implementa��o dos m�todos da classe
void Pessoa::setIdade(int idade_pessoa)
{
	idade = idade_pessoa;
}

// Implementa��o dos m�todos da classe
void Pessoa::setNome(string nome_pessoa)
{
	nome = nome_pessoa;
}

// Fun��o principal do programa
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	// Indica que o programa terminou com sucesso
	
	// Definindo um objeto ou inst�ncia de uma classe
	Pessoa pessoa1("nan", 0);
	
	int idade_pessoa;
	string nome_pessoa;
	
	cout << "Programa de Cadastro de Pessoas." << endl << endl;
	
	cout << "Insira seu nome: ";
	getline(cin, nome_pessoa);
	
	cout << "Insira a sua idade: ";
	cin >> idade_pessoa;
	
	pessoa1.setIdade(idade_pessoa);
	pessoa1.setNome(nome_pessoa);
	
	cout << "O Seu nome � " << pessoa1.getNome() << ". Voc� tem ";
	cout << pessoa1.getIdade() << " anos de idade." << endl; 
	
	
	return 0;
} // Fim da fun��o principal
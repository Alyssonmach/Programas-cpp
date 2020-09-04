// Analisando maior bloco de mem�ria de armazenamento e uma union - in01_at05.cpp

// Biblioteca de entrada e sa�da de dados
#include <iostream>
// Biblioteca para localiza��o de arquivos
#include <locale>

// Acessa as fun��es da biblioteca padr�o
using namespace std;

// Definindo uma struct
struct ss
{
	char a[10];
	int b;
} v;

// Definindo uma union
union uu
{
	char a[10];
	int b;
} t;

// Fun��o principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Armazenando valores na struct e na union
	v.b = 10;
	t.b = 10;
	
	// Informando a finalidade do programa
	cout << "Programa que mostra a diferne�a em bytes de uma struct e uma union." << endl << endl;
	
	// Analisando o espa�o de armazenamento da struct e da union
	cout << "Bytes armazenados na struct: " << sizeof(v) << endl;
	cout << "Bytes armazenados na union: " << sizeof(t) << endl;
		
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da fun��o main
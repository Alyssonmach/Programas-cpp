// Exemplo de uso de enum - un01_ex09.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca padr�o de localiza��o de arquivos
#include <locale>

// Acessa as fun��es das bibliotecas padr�o
using namespace std;

// Criando a enumera��o
enum booleano
{
	v = 1, f = 0
}; // Fim da enumera��o

// Fun��o principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Define que b recebe v
	booleano b = v;
	
	// Caso b seja verdadeiro
	if(b)
	{
		// Atribui f a b
		b = f;
	}
	
	// Imprime na sa�da de dados do usu�rio
	cout << "b equivale a: " << b << endl;
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim do programa principal
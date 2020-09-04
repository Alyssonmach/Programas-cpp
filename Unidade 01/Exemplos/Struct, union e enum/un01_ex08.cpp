// Programa dias da semana com enum - un01_ex08.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca padr�o de localiza��o de arquivos
#include <locale>

// Acessas as fun��es da biblioteca padr�o
using namespace std;

// Fun��o principal do programa
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inicializando um vetor de n�meros inteiros
	int junho[6][7] = {{0,0,0,0,0,0,1}, {2,3,4,5,6,7,8}, {9,10,11,12,13,14,15}, 
	                   {16,17,18,19,20,21,22}, {23,24,25,26,27,28,29}, 
					   {30,0,0,0,0,0,1}};

    // Definindo um enum
    enum dias {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};
    // Definindo um enum
    enum semana {semana01, semana02, semana03, semana04, semana05, semana06};
    
    cout << "Sexta-feira da terceira semana �: " << junho[semana03][Sexta] << endl;
    
	// Programa terminou com sucesso
	return 0;
} // Fim da fun��o principal
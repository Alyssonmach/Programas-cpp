// Soma e multiplica��o com n�meros inteiros - un01_at03.cpp

// Biblioteca padr�o de entrada e sa�da de dados
#include <iostream>
// Biblioteca padr�o para localiza��o de arquivos
#include <locale>
// Biblioteca padr�o de manipula��o de arquivos
#include <iomanip>

// Usa as fun��es das bibliotecas padr�o
using namespace std;

// Definindo uma struct
struct Num_complex
{
	float parte_real, parte_imaginaria; // Atributos da struct
};

void soma_complexa(Num_complex [], int);
void multiplicacao_complexa(Num_complex []);

#define TAM 2

// Fun��o principal do programa
int main()
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Declarando um vetor de vari�veis para a struct;
	Num_complex valores[TAM];
	
	// Inicializando as vari�veis
	int i, copia; 
	
	// Boas-vindas ao usu�rio
	cout << "Programa que Soma e Multiplica com n�meros inteiros." << endl << endl;
	
	// Recebendo os dados do usu�rio
	for(i =0; i < 2; i++)
	{
		copia = i;
		cout << "Informe a parte real do " << ++copia << "� n�mero: ";
		cin >> valores[i].parte_real;
		cout << "Informe a parte imagin�ria do " << copia << "� n�mero: ";
		cin >> valores[i].parte_imaginaria;
		cout << endl;
	}
	
	// Imprime a soma e a multiplica��o com os n�meros imagin�rios
	soma_complexa(valores, TAM);
	multiplicacao_complexa(valores);
	
	// Indica que a fun��o terminou com sucesso
	return 0;
}

// Fun��o que soma n�meros complexos
void soma_complexa(Num_complex valores[], int tam)
{
	float real = 0, imaginario = 0;
	int i;
	
	for(i =0; i < tam; i++)
	{
		real += valores[i].parte_real;
		imaginario += valores[i].parte_imaginaria;
	}
	cout << fixed << setprecision(3);
	cout << "Soma: " << real << " + " << imaginario << "i;" << endl;
	
	return;
}

// Fun��o que realiza a multiplica��o de n�meros complexos
void multiplicacao_complexa(Num_complex valores[])
{
	float real = 0, imaginario = 0;
	
	real += valores[0].parte_real * valores[1].parte_real - valores[0].parte_imaginaria * valores[1].parte_imaginaria;
	imaginario += valores[0].parte_imaginaria * valores[1].parte_real + valores[1].parte_imaginaria * valores[0].parte_real;
	
	cout << fixed << setprecision(3);
	cout << "Multiplica��o: " << real << " + " << imaginario << "i;" << endl;
	
	return;
}
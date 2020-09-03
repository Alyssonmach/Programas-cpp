// Opera��es com Fra��es - un01_at02.cpp

// Biblioteca padr�o de entrada e sa�da dos dados
#include <iostream>
// Biblioteca padr�o para manipula��o de string
#include <string>
// Biblioteca padr�o para localiza��o de arquivos
#include <locale>

// Usa fun��es da biblioteca padr�o
using namespace std;

// Definindo uma struct
struct fracao
{
	int num, den; // Atributos do struct
};

// Declarando fun��es
float fracionador(int, int);
float operacoes(float, float, int);

// Fun��o principal do programa
int main()
{
	// Definindo o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Definindo as vari�veis da struct
	fracao numeros[2];
	
	// Declarando a vari�vel
	int i, copia, opcao, verificador;
	
	// Mensagem de boas-vindas
	cout << "Programa que realiza opera��es com fra��es." << endl;
	
	// Recebendo os dados do usu�rio
	for(i = 0; i < 2; i++)
	{
		copia = i;
		cout << "Insira o " << ++copia << "� mumerador inteiro: ";
		cin >> numeros[i].num;
		
		do // Verificando se o denominador � diferente de zero
		{
			cout << "Insira o " << copia << "� denominador inteiro: ";
			cin >> numeros[i].den;
			
			if(numeros[i].den == 0)
			{
				cout << "Entrada Inv�lida. Tente novamente." << endl;
			}
		
		}while(numeros[i].den == 0);
	
	} // Fim da estrutura de repeti��o
	
	
	// Menu de escolhas da opera��o
	cout << "Escolha uma opera��o a ser realizada: " << endl;
	
	cout << "1 - Soma;" << endl;
	cout << "2 - Subtra��o;" << endl;
	cout << "3 - Multiplica��o;" << endl;
	cout << "4 - Divis�o;" << endl << endl;
	
	// Solicita a op��o da opera��o
	cout << "Op��o: ";
	cin >> opcao;
	
	do // Verificando se a op��o foi digitada corretamente
	{
		
		if(opcao >= 1 && opcao <= 4)
		{
        // Realiza a opera��o com as fra��es informadas
		cout << "Opera��o: " << operacoes(fracionador(numeros[0].num, numeros[0].den),
			                                   fracionador(numeros[1].num, numeros[1].den),
							                   opcao) << endl;
        verificador = 1;
		}
		else
		{
		cout << "Op��o invalida. Tente novamente." << endl;
		cout << "Op��o: ";
		cin >> opcao;
		verificador = 0;
		}
		
	}while(verificador != 1);
		
	// Indica que o programa terminou com sucesso
	return 0;
}

// Fun��o respons�vel por calcular as fra��es
float fracionador(int numerador, int denominador)
{
	float valor;
	
	valor = float(numerador) / float(denominador);
	
	return valor;
}

// Fun��o respons�vel por realizar opera��es com as fra��es
float operacoes(float numero1, float numero2, int opcao)
{
	if(opcao == 1)
	{
		return numero1 + numero2;
	}
	else if(opcao == 2)
	{
		return numero1 - numero2;
	}
	else if(opcao == 3)
	{
		return numero1 * numero2;
	}
	else if(opcao == 4)
	{
		return numero1 / numero2;
	}
	
	return 0;
}
// Programa que calcula as propriedades de um ret�ngulo - un02_lab01.cpp
// Aluno: Alysson Machado de Oliveira Barbosa
// Matr�cula: 119110236

// Biblioteca respons�vel pelo fluxo de entrada e sa�da de dados
#include <iostream>
// Biblioteca respons�vel por localiza��o de arquivos
#include <locale>
// Biblioteca para relizar opera��es num�ricas
#include <cmath>

// Acessa as fun��es das bibliotecas padr�o
using namespace std;

// Definindo uma classe Retangulo
class Retangulo{
	
	// Modificador de acesso private
	private:
		int pix,piy,psx, psy; // Membro de Dados da Classe
		bool checar(int,int,int,int); // Membro de Fun��o da Classe
    // Modificador de acesso public
	public:
		void setValores(int, int, int, int); // Membro de Fun��o da Classe
		int comprimento(void); // Membro de Fun��o da Classe
		int largura(void); // Membro de Fun��o da Classe
		int perimetro(void); // Membro de Fun��o da Classe
		int area(void); // Membro de Fun��o da Classe
		bool ehquadrado(void); // Membro de Fun��o da Classe
};

// Implementa��o dos m�todos da classe
bool Retangulo::checar(int x1, int y1, int x2, int y2)
{
	if(fabs(x2 - x1) == fabs(y2 - y1))
		return true;
	else
		return false;
}
// Implementa��o dos m�todos da classe
void Retangulo::setValores(int x1, int y1, int x2, int y2)
{
	pix = x1;
	piy = y1;
	psx = x2;
	psy = y2;
}
// Implementa��o dos m�todos da classe
int Retangulo::comprimento(void)
{
	if(fabs(psx - pix) >= fabs(psy - piy))
		return fabs(psx - pix);
	else
		return fabs(psy - piy);
}
// Implementa��o dos m�todos da classe
int Retangulo::largura(void)
{
	if(fabs(psx - pix) <= fabs(psy - piy))
		return fabs(psx - pix);
	else
		return fabs(psy - piy);
}
// Implementa��o dos m�todos da classe
int Retangulo::perimetro(void)
{
	return 2* fabs(psx - pix) + 2 * fabs(psy - piy);
}
// Implementa��o dos m�todos da classe
int Retangulo::area(void)
{
	return fabs(psx - pix) * fabs(psy - piy);
}
// Implementa��o dos m�todos da classe
bool Retangulo::ehquadrado(void)
{
	return checar(pix, piy, psx, psy);
}

// Fun��o principal do programa
int main(void)
{
	// Configurando o idioma brasileiro
	setlocale(LC_ALL, "portuguese");
	
	// Inst�ncia ou objeto da classe
	Retangulo ret1;
	
	int x1, y1, x2, y2;
	
	cout << "Programa Calculadora de ret�ngulos." << endl << endl;
	
	cout << "Insira a coordenada x do primeiro v�rtice do tri�ngulo: ";
	cin >> x1;
	cout << "Insira a coordenada y do primeiro v�rtice do tri�ngulo: ";
	cin >> y1;
	
	cout << "Insira a coordenada x do segundo v�rtice do tri�ngulo: ";
	cin >> x2;
	cout << "Insira a coordenada y do segundo v�rtice do tri�ngulo: ";
	cin >> y2;
	
	ret1.setValores(x1, y1, x2, y2);
	
	cout << endl << endl;
	
	cout << "O comprimento do ret�ngulo �: " << ret1.comprimento() << endl;
	cout << "A largura do ret�ngulo �: " << ret1.largura() << endl;
	cout << "O per�metro do ret�ngulo �: " << ret1.perimetro() << endl;
	cout << "A �rea do ret�ngulo �: " << ret1.area() << endl;
	
	if(ret1.ehquadrado())
		cout << "O objeto � um quadrado." << endl;
	else
		cout << "O objeto � um ret�ngulo." << endl;
	
	// Indica que o programa terminou com sucesso
	return 0;
} // Fim da fun��o principal
// Cadastro de coordenadas cartesianas - un02_ex03.cpp
// Usando Sobrecarga de Construtores

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// Definindo uma classe
class Ponto
{
	// Definindo um especificador de acesso a membros private
	private:
		float x, y;
    // Definindo um especificador de acesso a membros public
    public:
    	Ponto(void);
    	Ponto(float, float);
    	float getX(void);
    	float getY(void);
};

// Implementando o construtor da classe sem par�metros
Ponto::Ponto(void)
{
	x = y = 0.0;
}

// Implementando o construtor da classe com par�metros
Ponto::Ponto(float a, float b)
{
	x = a;
	y = b;
}

// Implementa��o dos m�todos da classe
float Ponto::getX(void)
{
	return x;
}
float Ponto::getY(void)
{
	return y;
}

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Criando objetos ou inst�ncias da classe
	Ponto meuPonto(1,2);
	Ponto outroPonto;
	
	cout << fixed << setprecision(2);
	
	cout << "programa de Coordenadas Cartesianas com Sobrecarga de Construtores." << endl << endl;
	
	cout << "O primeiro ponto �: (" << meuPonto.getX() << "," << meuPonto.getY() << ")." << endl;
	
	cout << "O segundo ponto �: (" << outroPonto.getX() << "," << outroPonto.getY() << ")." << endl;
	return  0;
}
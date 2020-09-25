// Implementando um programa que simula um condicionador - main.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matr�cula: 119110236
// T�cnicas de Programa��o (C++) - Salerno
// Unidade 04 - Laborat�rio 12 

#include <iostream>
#include "Condicionador.cpp"
#include <iomanip>
#include <locale>

using namespace std;

// Fun��o principal do programa

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	// Inst�ncias ou objetos da classe
	Condicionador condicionador1(25, 0), condicionador2;
	
	cout << "=== Programa Condicionador de Temperaturas ===" << endl << endl;
	
	cout << fixed << setprecision(2);
	
	condicionador2.setTemperatura(31);
	
	cout << "A temperatura atual do primeiro condicionador �: ";
	cout << condicionador1.getTemperatura() << "� C" << endl;
	
	cout << "A temperatura atual do segundo condicionador �: ";
	cout << condicionador2.getTemperatura() << "� C" << endl << endl;
	
	condicionador1.setPotencia(10);
	condicionador2.setPotencia(5);
	
	cout << "A temperatura resultante do primeiro condicionador �: ";
	cout << condicionador1.getTemperatura() << "� C" << endl;
	
	cout << "A temperatura resultante do segundo condicionador �: ";
	cout << condicionador2.getTemperatura() << "� C" << endl;

	return 0;
}
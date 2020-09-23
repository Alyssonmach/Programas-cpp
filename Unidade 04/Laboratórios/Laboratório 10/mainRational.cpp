// Implementando um programa de aritm�tica de fra��es - mainRationa.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matr�cula: 119110236
// T�cnicas de Programa��o (C++) - Salerno
// Unidade 03 - Laborat�rio 10

#include <locale>
#include <iomanip>

#include "Rational.cpp"

using namespace std;

// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "portuguese");
	
	// Inst�ncia ou objetos da classe
	Rational n1(2, 8), n2(3, 4), r;
	
	cout << fixed << setprecision(3);
	
	cout << "=== Programa opera��es com fra��es ===" << endl << endl;
	
	// Atribui a r o resultado da multiplica��o 
	r.multiplicaRational(n1, n2);
	
	// Obt�m os dados armazenados no objeto r
	cout << "Os dados de r s�o: " << r.getNumerador() << "/" << r.getDenominador() << endl;
	
	// Atribui a r o resultado da divis�o 
	r.divideRational(n1, n2);
	
	// Obt�m os dados armazenados no objeto r
	cout << "Os dados de r s�o: " << r.getNumerador() << "/" << r.getDenominador() << endl;
	
	return 0;
}

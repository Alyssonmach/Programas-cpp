// Implementando um programa que simula um rel�gio digital - main.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matr�cula: 119110236
// T�cnicas de Programa��o (C++) - Salerno
// Unidade 04 - Laborat�rio 11

#include <iostream>
#include "Relogio.cpp"
#include <locale>
#include <windows.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

// Cabe�alho da fun��o 
void menuRelogio(class Relogio);

// Fun��o principal do programa
int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	// Inst�ncia ou objeto da classe
	Relogio meuRelogio;
	
	int h, m, s;
	
	cout << "Programa Meu Rel�gio Pessoal" << endl << endl;
	
	cout << "Insira a hora atual: ";
	cin >> h;
	
	cout << "Insira o minuto atual: ";
	cin >> m;
	
	cout << "Insira o segundo atual: ";
	cin >> s;
	
	meuRelogio.setHora(h, m, s);
	
	system("cls");
	
	menuRelogio(meuRelogio);
	
	return 0;
}

// Criando um menu para o rel�gio
void menuRelogio(Relogio rel)
{
	int hora, minuto, segundo;
	
	do
	{
		// Retorno usando passagem por refer�ncia
		rel.getHora(&hora, &minuto, &segundo);
		
		cout << "Meu Rel�gio Pessoal" << endl << endl;
		
		cout << setfill('0') << setw(2) << hora << ":";
		cout << setfill('0') << setw(2) << minuto << ":";
		cout << setfill('0') << setw(2) << segundo << endl;
		
		rel.passaSegundo();
		
		Sleep(1000);
		system("cls");
		
	}while(true);
}
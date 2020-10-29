// Implementa��o de um programa que simula o gerenciamento de im�veis - Velho.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 16 
// Ambiente de Desenvolvimento: Falcon C++

#ifndef VELHO_H
#define VELHO_H

#include "Imovel.h"

// Definindo a classe velho que herda da classe Imovel
class Velho : public Imovel
{
	private:
		static float porcentagem_decrescimo;
	public:
		Velho(string = " ", int = 0, string = " ", string = " ", float = 0.0);
		static void setAumenta(float pcrt)
		{
			porcentagem_decrescimo = (pcrt >= 0 && pcrt <= 1) ? pcrt : 0;
		}
		static float getDecrescenta(void)
		{
			return porcentagem_decrescimo;
		}
		void setPreco(float);
		void setEndereco(string, int, string, string);
        float getPreco(void) const;
        float getPrecoDesconto(void) const;
        void getEndereco(void) const;
};

#endif
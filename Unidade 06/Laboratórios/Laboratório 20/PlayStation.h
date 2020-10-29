// Programa gerenciador de estoque em produto - PlayStation.h

// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 20
// Ambiente de Desenvolvimento: Falcon C++

#ifndef PLAYSTATION_H
#define PLAYSTATION_H

#include "Produto.h"

// definindo a classe PlayStation que herda de Produto
class PlayStation : public Produto
{
	private:
		float desconto;
    public:
    	PlayStation(float = 0.0, int = 0, string = " ", float = 0.0);
    	float getDesconto(void) const;
    	bool verificaDesconto(int) const;
    	float getPrecoAtual(int) const;
};

#endif
// Programa gerenciador de estoque em produto - Xbox.h

// Aluno Alysson Machado de Oliveira Barbosa
// Matr�cula: 119110236
// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 20
// Ambiente de Desenvolvimento: Falcon C++

#ifndef XBOX_H
#define XBOX_H

#include "Produto.h"

// classe Xbox que herda de produto
class Xbox : public Produto
{
	private:
		float desconto;
    public:
    	Xbox(float = 0.0, int = 0, string = " ", float = 0.0);
    	float getDesconto(void) const;
    	bool verificaDesconto(int) const;
    	float getPrecoAtual(int) const;
};

#endif
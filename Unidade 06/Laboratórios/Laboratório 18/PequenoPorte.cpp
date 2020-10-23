// Programa de tributa��o de impostos em empresas - PequenoPorte.cpp

// Aluno Alysson Machado de Oliveira Barbosa
// Matr�cula: 119110236
// T�cnicas de Programa��o (C++) - Salerno
// Unidade 06 - Laborat�rio 18
// Ambiente de Desenvolvimento: Falcon C++

#include "PequenoPorte.h"

// definindo o construtor da classe
PequenoPorte::PequenoPorte(string nome, long int cgc, float impostos, bool simples) : Empresa(nome, cgc)
{
	this -> impostos = impostos;
	this -> simples = simples;
}

// m�todo que configura os impostos brutos
void PequenoPorte::setImpostos(float impostos)
{
	this -> impostos = (impostos > 0) ? impostos : 0;
}

// m�todo que retorna os impostos tributados
float PequenoPorte::getImpostos(void) const
{
	if(simples == true)
		return (impostos - (0.7 * impostos));
	else 
		return (impostos - (0.5 * impostos));
}

// m�todo que retorna a situa��o de cadastro da pequena empresa no SIMPLES
bool PequenoPorte::getSIMPLES(void) const
{
	return simples;
}
#ifndef VendasFunc_H
#define VendasFunc_H

class VendasFunc
{
	public:
		VendasFunc(void);
		int setVendas(int, double);
		void imprTotalVendas(void);
	private:
		double totalVendas(); // fun��o utilit�ria
		double vendas[12];
};

#endif
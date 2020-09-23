#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;
#include "Pessoa.cpp"
#include "Carro.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	Pessoa p1;
    p1.setNome("Jose");
    p1.setCPF(123456);
    p1.setEndereco("Rua das Flores", 10, "Bodocong�", 58000);
    // instancia de carro com os valores iniciais de carro1
    Carro carro1(p1, "Fiat",2020,"XYZ1998", 10);
    
	carro1.abastece(30); //abastece o carro com 30 litros
	
	//o m�todo percurso() indica que o carro vai andar 100km (se
	//houver combust�vel). Caso contr�rio, a quilometragem n�o � alterada
	carro1.percurso(100); 
	
	cout<<endl<<"Quilomentragem do carro: "<<carro1.getQuilometragem()<<endl;
	cout<<"Tanque: "<<carro1.getTanque()<<endl;
	
	return 0;
}
#ifndef Horario_H // C�digo de pr�-processador a evitar inclus�es m�ltiplas
#define Horario_H

class Horario
{
	private:
		int hora, minuto, segundo;
	public:
		Horario(void);
		void alteraHorario(int, int, int);
		void imprUniv(void);
		void imprPadrao(void);
};

#endif
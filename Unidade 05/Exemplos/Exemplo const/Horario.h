#ifndef HORARIO_H
#define HORARIO_H

class Horario{
public:
   Horario( int = 0, int = 0, int = 0 ); 
   void setHorario( int, int, int ); 
   void setHour( int ); 
   void setMinute( int ); 
   void setSecond( int ); 
   int getHour() const; // fun��es get (normalmente declaradas const)
   int getMinute() const; 
   int getSecond() const; 
   void printUniversal() const; // fun��es print (normalmente declaradas const)
   void printStandard(); //n�o-const??
private:
   int hour; // 0 - 23 
   int minute; // 0 - 59
   int second; // 0 - 59
}; 
#endif
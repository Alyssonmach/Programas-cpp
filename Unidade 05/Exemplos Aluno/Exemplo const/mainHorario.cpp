#include <iostream>
#include "Horario.cpp"

using namespace std;

int main() {
   Horario wakeUp( 6, 45, 0 ); // objeto n�o-constante
   const Horario noon( 12, 0, 0 ); // objeto constante
                                          // OBJETO      FUN��O MEMBRO 
   wakeUp.setHour( 18 );  // n�o-const        n�o-const
   noon.setHour( 12 );       // const               n�o-const
   
   wakeUp.getHour();        // n�o-const           const
   noon.getMinute();         // const                  const

   wakeUp.printUniversal();// n�o-const        const
   noon.printUniversal();   // const                 const
   
   wakeUp.printStandard();// n�o-const       non-const   
   noon.printStandard();    // const               n�o-const
   return 0;
}
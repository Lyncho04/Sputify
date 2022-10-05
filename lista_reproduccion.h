#ifndef LISTA_REPRODUCCION_H
#define LISTA_REPRODUCCION_H
#include "cancion.h"
class ListaRep{
  private:
    Cancion*frente;
    Cancion*cola;
  public:
    ListaRep(){
        frente=NULL;
        cola=NULL;
    }
    void Queue(Cancion *_cancion);
    Cancion * deQueue(Cancion *_cancion);

};
#endif // LISTA_REPRODUCCION_H

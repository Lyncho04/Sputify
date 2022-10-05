#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "cancion.h"

class Biblioteca{
  private:
    Cancion * inicio;
  public:
    Biblioteca(){
        inicio=NULL;
    }

    void insertarCancion(Cancion *_cancion); //Inserta ordenada por nombre
    void eliminarCancion(Cancion *_cancion); //Usa buscar(cancion)
    Cancion * buscar(Cancion*_cancion);
    void mostrarCanciones(); //verifica que esta vacia primero

};

#endif // BIBLIOTECA_H

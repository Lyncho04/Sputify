#ifndef ALBUM_H
#define ALBUM_H
#include "cancion.h"
class Album{
private:
    Cancion*inicio;
public:
    Album(){
        inicio=NULL;
    }

    void insertarCancion(Cancion *_cancion); //Inserta ordenada por identificador numerico
    void eliminarCancion(Cancion *_cancion); //Usa buscar(cancion)
    Cancion * buscar(Cancion*_cancion);
    void mostrarCanciones();
};
#endif // ALBUM_H

#ifndef FAVORITAS_H
#define FAVORITAS_H
#include "cancion.h"

class Favoritas{
private:
    Cancion * inicio;
    Cancion* fin;
public:
    Favoritas(){
        inicio=fin=NULL;
        }
    void insertarFav(Cancion*_cancion);
    Cancion * buscarFav(Cancion * _cancion);
    void eliminarFav(Cancion * _cancion);
    void mostrarFavs();

};
#endif // FAVORITAS_H

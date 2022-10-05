#include "favoritas.h"


void Favoritas::insertarFav(Cancion *_cancion){
    if (inicio == NULL){
        inicio = _cancion;
        fin = _cancion;
    }else{
        fin ->sig = _cancion;
        _cancion->ant = fin;

    }
    fin = _cancion;
    fin->sig = inicio;
}

void Favoritas::eliminarFav(Cancion *_cancion){
    if (_cancion ->getNombre()==inicio->getNombre()){
        Cancion *eliminado = inicio;
        inicio = inicio->sig;
        eliminado ->sig=NULL;
    }

    else{
        Cancion *cancion_anterior=inicio;
        Cancion *tmp = inicio;
        while (tmp!= NULL){
            if (tmp->getNombre()== _cancion->getNombre()){
                cancion_anterior->sig=tmp->sig;
                tmp->sig = NULL;
            }
            cancion_anterior=tmp;
            tmp=tmp->sig;
        }

    }

}

Cancion * Favoritas::buscarFav(Cancion *_cancion){
    Cancion*tmp=inicio;
    while (tmp!=NULL){
        if(tmp->getNombre()==_cancion->getNombre()){
            return tmp;
        }
        tmp=tmp->sig;
    }
    return NULL;
}





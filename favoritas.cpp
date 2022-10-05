#include "favoritas.h"


void Favoritas::insertarFav(Cancion *_cancion){
    if (inicio == NULL){
        inicio = _cancion;
        fin = _cancion;
    }else{
        fin ->sig = _cancion;
        _cancion->ant = fin;
        _cancion->sig = inicio;
        inicio->ant=_cancion;
        fin = _cancion;
        
    }
    
}

void Favoritas::eliminarFav(Cancion *_cancion){
    if (_cancion ->getNombre()==inicio->getNombre()){
        if(inicio->getNombre()==fin->getNombre()){
            inicio=fin=NULL;
        }
        else{
            fin->sig=inicio->sig;
            inicio=inicio->sig;
            inicio->ant=fin;  
        }
    }

    else{
        Cancion *cancion_eliminar = buscar(_cancion);
        if (cancion_eliminar->ant!=NULL){
            cancion_eliminar->ant->sig=cancion_eliminar->sig;
        }
        if (cancion_eliminar->sig!=NULL){
            cancion_eliminar->sig->ant=cancion_eliminar->ant;
        }
    }
}

Cancion * Favoritas::buscarFav(Cancion *_cancion){
    Cancion*tmp=inicio;
    tmp=tmp->sig;
    while (tmp!=inicio){
        if(tmp->getNombre()==_cancion->getNombre()){
            return tmp;
        }
        tmp=tmp->sig;
    }
    return NULL;
}





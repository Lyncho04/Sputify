#include "biblioteca.h"
void Biblioteca::insertarCancion(Cancion *_cancion){//Inserta ordenada por nombre
    if (inicio==NULL){
        inicio=_cancion;
    }
    else{
        Cancion*tmp=inicio;
        while(tmp->sig !=NULL){
            if (_cancion->getNombre()<tmp->getNombre()){
                tmp->ant=_cancion;
                tmp->ant->sig=_cancion;

                _cancion->sig=tmp;
                _cancion->ant=tmp->ant->ant;

                break;
            }
            tmp=tmp->sig;
        }
    }
}

void Biblioteca::eliminarCancion(Cancion *_cancion){//Usa buscar(cancion)
    Cancion* cancion_eliminar=buscar(_cancion);
    if(cancion_eliminar!=NULL){
        if(cancion_eliminar==inicio){
            inicio=inicio->sig;
        }
        if (cancion_eliminar->ant!=NULL){
            cancion_eliminar->ant->sig=cancion_eliminar->sig;
        }
        if (cancion_eliminar->sig!=NULL){
            cancion_eliminar->sig->ant=cancion_eliminar->ant;
        }
    }
}

Cancion * Biblioteca::buscar(Cancion*_cancion){
    Cancion*tmp=inicio;
    while (tmp!=NULL){
        if(tmp->getNombre()==_cancion->getNombre()){
            return tmp;
        }
        tmp=tmp->sig;
    }
    return NULL;
}

void Biblioteca::mostrarCanciones(){//verifica que esta vacia primero

}

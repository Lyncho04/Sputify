#include "album.h"

void Album::insertarCancion(Cancion *_cancion){//Inserta ordenada por identificador numerico
    if (inicio==NULL){
        inicio=_cancion;
    }
    else{
        Cancion *tmp=inicio;
        while(tmp->sig != NULL){
            if (tmp->getIdentificador()<tmp->sig->getIdentificador()){
               tmp->sig=_cancion;
               _cancion->sig=tmp->sig->sig;
               break;
            }
            tmp=tmp->sig;
        }
    }
}
void Album::eliminarCancion(Cancion *_cancion){//Usa buscar(cancion)
    if (_cancion->getNombre()==inicio->getNombre()){
        Cancion * eliminado=inicio;
        inicio=inicio->sig;
        eliminado->sig=NULL;
       }
    else{
        Cancion* cancion_anterior=inicio;
        Cancion* tmp=inicio;
        while (tmp!=NULL){
            if (tmp->getNombre()==_cancion->getNombre()){
                cancion_anterior->sig=tmp->sig;
                tmp->sig=NULL;
            }
            cancion_anterior=tmp;
            tmp=tmp->sig;
        }
    }
}
Cancion * Album::buscar(Cancion*_cancion){
    Cancion*tmp=inicio;
    while (tmp!=NULL){
        if(tmp->getNombre()==_cancion->getNombre()){
            return tmp;
        }
        tmp=tmp->sig;
    }
    return NULL;
}
void Album::mostrarCanciones(){

}

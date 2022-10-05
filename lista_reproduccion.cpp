# include "lista_reproduccion.h"


void ListaRep::Queue(Cancion *_cancion){
    if (frente == NULL){
        frente= _cancion;

    }
    else{
        cola ->sig = _cancion;
    }
    cola = _cancion;
}

Cancion * ListaRep::deQueue(Cancion *_cancion){
    Cancion *tmp = frente;

    if (tmp == cola){
        frente = NULL;
        cola = NULL;

    }else{
        frente = frente ->sig;
    }
    delete tmp;
    return _cancion;

}

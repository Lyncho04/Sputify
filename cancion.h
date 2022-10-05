#ifndef CANCION_H
#define CANCION_H
#include <cstdlib>
#include <QString>
#include <QFileDialog>

class Cancion{
private:
    QString *nombrecancion;
    QString *direccion;
    bool favoritas;
    bool enCola;
    int *identificador;
public:
    Cancion *ant,*sig;

    Cancion(QString *_direccion,QString *_nombrecancion, int *_identificador){
        favoritas=false;
        ant=sig=NULL;
        direccion=_direccion;
        nombrecancion=_nombrecancion;
        identificador=_identificador;
    }
    Cancion(QString *_direccion,QString *_nombrecancion,bool _favoritas, int *_identificador){
        favoritas=_favoritas;
        ant=sig=NULL;
        direccion=_direccion;
        nombrecancion=_nombrecancion;
        identificador=_identificador;
    }
    Cancion(QString *_direccion,QString*_nombrecancion,Cancion *_sig,Cancion *_ant,bool _favoritas, int *_identificador){
        favoritas=_favoritas;
        sig=_sig;
        ant=_ant;
        direccion=_direccion;
        nombrecancion=_nombrecancion;
        identificador=_identificador;
    }
    void reproducir();
    void pausar();
    QString getNombre();
    void pasarCancion();
    void cancionAnterior();
    QString getDireccion();
    bool addFavoritas();
    bool addCola();
    int getIdentificador();
};
#endif // CANCION_H

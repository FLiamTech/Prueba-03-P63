#ifndef BIBLIOGRAFIA_H
#define BIBLIOGRAFIA_H
#include "documento.h"
#include "libro.h"
#include "articulo.h"
#include "iostream"
class Bibliografia : public Libro, public Articulo

{
private:
    vector<Documento*> referencias;
public:
    Bibliografia();
    bool agregarLibro();
    bool agregarArticulo();
    void imprimirReferencias();
};

#endif // BIBLIOGRAFIA_H

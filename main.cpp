#include <iostream>
#include "bibliografia.h"

using namespace std;

int main()
{
    int op;
    Bibliografia blb;
    do{
        cout<<"1. Agregar un Libro"<<endl;
        cout<<"2. Agregar un Articulo"<<endl;
        cout<<"3. Mostrar Referencias"<<endl;
        cout<<"4. Salir"<<endl;
        do
        {
            cout<<"Ingrese la opcion: ";
            cin>>op;
            if(op < 0 || op > 4)
            {
                cout<<"Error..."<<endl;
            }
        }while(op < 0 || op > 4);
        switch(op){
        case 1:
            blb.agregarLibro();
            break;
        case 2:
            blb.agregarArticulo();
            break;
        case 3:
            blb.imprimirReferencias();
            break;
        }
    }while(op!=4);



    return 0;
}

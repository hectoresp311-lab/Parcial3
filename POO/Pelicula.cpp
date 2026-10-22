//
// Created by hecto on 21/10/2026.
//

#include "Pelicula.h"

int main() {
    Pelicula pelicula,pelicula2;
    pelicula.titulo = "Van Helsing";
    pelicula.duracion = 131;
    pelicula.genero = "Accion";

    pelicula2.titulo = "Jhon Wick";
    pelicula2.duracion = 141;
    pelicula2.genero = "Accion";
    pelicula2.calificacion = 99;

    pelicula.mostrarInfo();
    cout<<"\n";
    pelicula2.mostrarInfo();
    cout<<"\n";
    pelicula2.metodoDelProfe(pelicula2.calificacion);
    cout<<"Desde main\n";
    cout << pelicula2.metodoDelProfe(pelicula2.calificacion);


    return 0;
}

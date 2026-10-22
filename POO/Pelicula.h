//
// Created by hecto on 21/10/2026.
//

#ifndef PARCIAL3_PELICULA_H
#define PARCIAL3_PELICULA_H
#include <iostream>
#include <string>
using namespace std;

class Pelicula {
//100-excelente 70-99 Buena 0-69 mediocre return entero
public:
    string titulo;
    int duracion = 0;
    string genero = "Terror";
    float calificacion = 5;


    void mostrarInfo() const {
        cout<<titulo<<"\n";
        cout<<duracion<<" minutos\n";
        cout<<genero<<"\n";
        cout<<calificacion<<"\n";

    }

    string metodoDelProfe(float calificacion) const {
        string resultado = "";
        if (calificacion < 69 && calificacion > 0) {
            cout<< "Mediocre" << endl;
            resultado = "Mediocre";
        }

        if (calificacion >=70 && calificacion <= 99) {
            cout<< "Buena" << endl;
            resultado = "Buena";
        }
        if (calificacion ==100) {
            cout<< "Excelente" << endl;
            resultado = "Excelente";
        }
        return resultado;
    }




};


#endif //PARCIAL3_PELICULA_H

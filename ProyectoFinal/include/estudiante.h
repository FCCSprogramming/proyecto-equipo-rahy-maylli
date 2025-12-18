#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "persona.h" //incluye std

struct Historialnotas {
    float* notas;
    int cantidad;
};

class Estudiante :public Persona{
    private:
        Historialnotas*  historial;
    public:
        Estudiante(const string& apellidoNombre, int dni,);
        ~Estudiante();

    void agregarnota(float nota);
    float calcularDesempeño() const override;
};

#endif
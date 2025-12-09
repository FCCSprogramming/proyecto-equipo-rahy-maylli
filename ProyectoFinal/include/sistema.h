#ifndef SISTEMA_H
#define SISTEMA_H
#include <iostream>
#include <memory>
#include <vector>
#include "estudiante.h" // ya tiene std?
#include "curso.h"

using namespace std;

struct registroBinario{
    int dni;
    char apellidoNombre[50];
    float promedio;
};

class Sistema{
    private:
        vector<unique_ptr<Persona>> estudiantes;
        vector<curso> cursos;
    public:
        Sistema();
        ~Sistema();
        void agregarEstudiante();
        void agregarCurso();
        void mostrarEstudiantes() const;
        void agrergarNotaAEstudiante();

        void guardarBinario();
        void cargarBinario();
        void exportReporteTxt();
        void buscarEstudianteRandomAccess(int ind);
};

#endif
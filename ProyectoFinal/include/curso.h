#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include <string>

using namespace std;

class Curso{
    private:
        string nombreCurso;
        int codigoCurso;
        int creditos;
    public:
        Curso(const string& nombreCurso, int codigoCurso, int creditos);
        string getnombreCurso() const{
            return nombreCurso;
        }
        string getcodigoCurso() const{
            return codigoCurso;
        }
        void mostrarCurso() const;
        ~Curso();
};

#endif
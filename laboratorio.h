#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"
#include <vector>

class Laboratorio
{
    vector<Computadora> computadoras;

public:
    Laboratorio();
    void agregarComponente(const Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    void insertar(const Computadora &c, size_t pos);
    size_t size();
    void inicializar(const Computadora &c, size_t n);
    void eliminar(size_t pos);
    void ordenar();
    Computadora* buscar(const Computadora &c);
    void eliminarUltimo();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
    {
        l.agregarComponente(c);

        return l;
    }
};

#endif
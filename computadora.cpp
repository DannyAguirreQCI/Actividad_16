#include "computadora.h"

Computadora :: Computadora()
{
    sistemaoperativo = "-";
    memoriaram = "-";
    nombreequipo = "-";
    memoriarom = "-";
}

    Computadora :: Computadora(const string &sistemaoperativo,
                                const string &memoriaram,
                                const string &nombreequipo,
                                const string &memoriarom)
    {
            this->sistemaoperativo = sistemaoperativo;
            this->memoriaram = memoriaram;
            this->nombreequipo = nombreequipo;
            this->memoriarom = memoriarom;
    }

void Computadora::setSistemaOperativo(const string &valor)
{
    sistemaoperativo = valor;
}

string Computadora::getSistemaOperativo() const
{
    return sistemaoperativo;
}

void Computadora::setMemoriaRAM(const string &valor)
{
    memoriaram = valor;
}

string Computadora::getMemoriaRAM() const
{
    return memoriaram;
}

void Computadora::setNombreEquipo(const string &valor)
{
    nombreequipo = valor;
}

string Computadora::getNombreEquipo() const
{
    return nombreequipo;
}

void Computadora::setMemoriaROM(const string &valor)
{
    memoriarom = valor;
}

string Computadora::getMemoriaROM() const
{
    return memoriarom;
}
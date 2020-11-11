#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include<iomanip>
using namespace std;

class Computadora
{
public:
    Computadora();
    Computadora(const string &sistemaoperativo,
                const string &memoriaram,
                const string &nombreequipo,
                const string &memoriarom);

    void setSistemaOperativo(const string &valor);
    string getSistemaOperativo() const;

    void setMemoriaRAM(const string &valor);
    string getMemoriaRAM() const;

    void setNombreEquipo(const string &valor);
    string getNombreEquipo() const;

    void setMemoriaROM(const string &valor);
    string getMemoriaROM() const;

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out<<left;
        out<<setw(10)<<c.sistemaoperativo;
        out<<setw(10)<<c.memoriaram;
        out<<setw(10)<<c.nombreequipo;
        out<<setw(10)<<c.memoriarom;
        out<<endl;

        return out;
    }

    friend istream& operator>> (istream &in, Computadora &c)
    {
        cout<<"Sistema Operativo:";
        getline(cin, c.sistemaoperativo);

        cout<<"Memoria RAM:";
        getline(cin, c.memoriaram);

        cout<<"Nombre del equipo:";
        cin >> c.nombreequipo;

        cout<<"Memoria ROM:";
        cin >> c.memoriarom;

        return in;
    }
    bool operator==(const Computadora& c)
    {
        return sistemaoperativo == c.sistemaoperativo;
    }

    bool operator==(const Computadora& c) const
    {
        return sistemaoperativo == c.sistemaoperativo;
    }

    bool operator<(const Computadora& c)
    {
        return sistemaoperativo < c.sistemaoperativo;
    }

    bool operator<(const Computadora& c) const
    {
        return sistemaoperativo < c.sistemaoperativo;
    }

private:
    string sistemaoperativo;
    string memoriaram;
    string nombreequipo;
    string memoriarom;

};

#endif
#ifndef CHAVES
#define CHAVES
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Caramelo : public ArmaDefesa
{
    public:
        Caramelo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
};
#endif
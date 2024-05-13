#ifndef ARTECULTURA
#define ARTECULTURA
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class ArteCultura : public ArmaDefesa
{
    public:
        ArteCultura(string descricaoArma, int resistencia);
};
#endif
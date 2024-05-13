#ifndef CHAVES
#define CHAVES
#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Caramelo : public ArmaAtaque
{
    public:
        Caramelo(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};
#endif
#ifndef CHAVES
#define CHAVES
#include "../core-simulador-hpp/ArmaAtaque.hpp"
class ChequeMilicia : public ArmaAtaque
{
    public:
        ChequeMilicia(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};
#endif
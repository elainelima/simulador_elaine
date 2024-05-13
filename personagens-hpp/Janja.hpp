#ifndef CHAVES
#define CHAVES
#include "../core-simulador-hpp/Personagem.hpp"
class Janja : public Personagem
{
    public:
        Janja(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
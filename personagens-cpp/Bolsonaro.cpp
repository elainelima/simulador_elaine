#include "../personagens-hpp/Bolsonaro.hpp"

Bolsonaro::Bolsonaro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Bolsonaro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Bolsonaro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Bolsonaro::pegarDescricao() 
{
    return "Eii, não contava com a minha astucia?";
}
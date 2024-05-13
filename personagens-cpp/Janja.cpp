#include "../personagens-hpp/Janja.hpp"

Janja::Janja(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Janja::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Janja::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Janja::pegarDescricao() 
{
    return "Eii, não contava com a minha astucia?";
}
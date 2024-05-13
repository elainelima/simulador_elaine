#include "../personagens-hpp/Lula.hpp"

Lula::Lula(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Lula::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Lula::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Lula::pegarDescricao() 
{
    return "Eii, não contava com a minha astucia?";
}
#include "../personagens-hpp/Micheque.hpp"

Micheque::Micheque(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Micheque::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Micheque::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Micheque::pegarDescricao() 
{
    return "Eii, não contava com a minha astucia?";
}
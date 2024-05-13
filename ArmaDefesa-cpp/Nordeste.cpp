#include "../ArmaDefesa-hpp/Nordeste.hpp"

Nordeste::Nordeste(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Chaves::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Chaves::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Chaves::pegarDescricao() 
{
    return "Eii, não contava com a minha astucia?";
}
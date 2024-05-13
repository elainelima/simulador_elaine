#include "../personagens-hpp/Xandao.hpp"

Xandao::Xandao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Xandao::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Xandao::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Xandao::pegarDescricao() 
{
    return "";
}
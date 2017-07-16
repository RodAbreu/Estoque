#include <iostream>
#include <string>
#ifndef ESTOQUE_HPP
#define ESTOQUE_HṔP

using namespace std;

class Estoque
{
public:
    int quantItensTotal;
    int quantItensDiferentes; //pensar em um jeito de implementar
public:
     Estoque();
    ~Estoque();

    void set_quantEstoque(int quantEstoque);
    int get_quantEstoque();
    
    void adicionaEstoque();
    void removeEstoque();

    void exibicaoEstoque();
    
};


Estoque::Estoque(){
    quantItensTotal = 0;
}
Estoque::~Estoque(){}

void set_quantEstoque(int quantEstoque){
	
}
int get_quantEstoque();

void Estoque::adicionaEstoque(){
    quantItensTotal += 1;
}
void Estoque::removeEstoque(){
    quantItensTotal -= 1;
}

void Estoque::exibicaoEstoque(Item &x){
    for (int i = 0; i < quantItensTotal; ++i)
    {
        x[i].exibicaoItem();
    }
}
#endif
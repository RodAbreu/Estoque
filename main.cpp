#include "Lista.hpp"
#include "NodeType.hpp"
#include <iostream>
#include <string>

using namespace std;

//ERRO NA CRIAÇÃO DE UM OBJETO DA CLASSE LISTA


int main(int argc, char const *argv[])
{
	Lista teste;
	NodeType* a = new NodeType();
	NodeType* b = new NodeType();
	NodeType* c = new NodeType();
	NodeType* d = new NodeType();
	NodeType* e = new NodeType();
	NodeType* f = new NodeType();
	NodeType* g = new NodeType();
	NodeType* h = new NodeType();

	a->constroiTudo("rafael",5);
	b->constroiTudo("rafael",5);
	c->constroiTudo("rodrigo",2);
	d->constroiTudo("rafael",3);
	e->constroiTudo("rodrigo",2);
	f->constroiTudo("delano",2);
	g->constroiTudo("rafael",2);
	h->constroiTudo("delano",2);

	teste.Insere(a);
	teste.Insere(b);
	teste.Insere(c);
	teste.Insere(d);
	teste.Insere(e);
	teste.Insere(f);
	teste.Insere(g);
	teste.Insere(h);

	teste.exibeLista();
	// cout<<teste.quantItens()<<endl;


	return 0;
}
	
	

 //    cout<<"Ola, Madalena!"<<endl;
 //    cout<<"Bem vinda ao programa de gerenciamento de estoque!\n\n"<<endl;
 //    do{
 //    cout<<"Digite [1] - Verificar o estoque. \nDigite [2] - Inserir um item. \nDigite [3] - Vender um item. \nDigite [4] - Remover um item. \nDigite[5] - finalizar. \n"<<endl;
 //    cin>>decisao;//escolha do usuário
    
 //    switch (decisao)
 //    {
 //        case 1:
        	

 //        case 2:

 //         case 3:



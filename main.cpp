#include "Lista.hpp"
#include "NodeType.hpp"
#include <iostream>

using namespace std;

//ERRO NA CRIAÇÃO DE UM OBJETO DA CLASSE LISTA


int main(int argc, char const *argv[])
{
	Lista teste;
	NodeType* y = new NodeType();
	NodeType* z = new NodeType();
	NodeType* t = new NodeType();
	NodeType* q = new NodeType();
	NodeType* p = new NodeType();
	y->constroiTudo("rodrigo",2);
	// z->constroiTudo("rafael",1);
	t->constroiTudo("rodrigo",2);
	// q->constroiTudo("rafael",3);
	// p->constroiTudo("Delano",5);
	teste.Insere(y);
	// teste.Insere(z);
	teste.Insere(t);
	// teste.Insere(q);
	// teste.Insere(p);
	teste.exibeLista();


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



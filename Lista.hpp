#ifndef LISTA_HPP
#define LISTA_HPP

#include "NodeType.hpp"
#include <iostream>
#include <string>

using namespace std;

class Lista
{
public:
	Lista();
	~Lista();

	void Cria(NodeType *x);
	void InsereADireita(NodeType* x);
	void Insere(NodeType* x);
	void exibeLista();
	int quantItens() const;
	void hello();
	bool Vazia();
//	void cheia();
//	void procuraNo();
//	void removeNo();


public:
	NodeType* P;
	//int ID;
};


Lista::Lista(){
	P = NULL;	
}

Lista::~Lista(){}

bool Lista::Vazia(){
	if(P==NULL){
		return true;
	}else{
		return false;
	}
}



void Lista::Insere(NodeType* x){
	if(Vazia()){
		Cria(x);
	}else{
		InsereADireita(x);
	}
}

void Lista::Cria(NodeType *x){
	P = new NodeType();
	P = x;
	P->set_next(NULL);
	//ID = 1;
}
void Lista::InsereADireita(NodeType* x){
	
	NodeType *Paux;
	NodeType *Paux2 = new NodeType();
	Paux2 = x;
	Paux2->set_next(NULL);
	Paux = P;
	while(Paux->get_next()!=NULL){
		if (Paux2->get_nome()==Paux->get_nome()){
			Paux->set_quant(Paux->get_quant()+Paux2->quant);
			break;	
		}
		Paux = Paux->get_next();
	}
	Paux->set_next(Paux2);
	//Paux2->set_id(ID);

}

int Lista::quantItens()const{
	if (P==NULL){
		return 0;
	}else{
		int x = 0;
		while(P!=NULL){
			x++;
			P->set_next(P->get_next());
		}
	}
}

void Lista::exibeLista(){
	NodeType *Aux;
	Aux = P; 

	if(Vazia()){
		cout<<"Não ha itens"<<endl;
	}else{
		while(Aux!=NULL){

			cout<<"ID: "<<Aux->get_id()<<endl;
			cout<<"Nome: "<<Aux->get_nome()<<endl;
			cout<<"Quantidade: "<<Aux->get_quant()<<endl;
			cout<<endl;

			Aux = Aux->get_next();

		}
	}
}





#endif


	// x->set_id(quantItens()+1);
	// cout<<"Digite o nome do item: "<<endl;
	// string a;
	// cin>>a;
	// x->set_nome(a);

	// cout<<"Digite a quantidade do item: "<<endl;
	// int b;
	// cin>>b;
	// x->set_quant(b);

	// P->set_next(x);
	// //delete(x);
#ifndef LISTA_HPP
#define LISTA_HPP

#include "NodeType.hpp"
#include <iostream>
#include <string.h>	

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
	bool Ok = false;

	while(Paux!=NULL&&Ok==false){

		if (Paux2->get_nome()==Paux->get_nome()){ //caso já tenha o item
		 	Paux->set_quant(Paux->get_quant()+Paux2->get_quant());
		 	Ok = true;
		}else{
			if(Paux->get_next()==NULL){ //caso não tenha o item
				Paux->set_next(Paux2);
				// cout<<"novo"<<endl;
				Ok = true;
			}else{
				Paux = Paux->get_next();//pula para o próximo
				// cout<<"pula"<<endl;
			}
		}	
	}
	Paux = NULL;
	Paux2 = NULL;

	//Paux2->set_id(ID);

}

int Lista::quantItens()const{
	NodeType* x;
	x = P;

	if (x==NULL){
		return 0;
	}else{
		int quant = 0;
		while(x!=NULL){
			quant++;
			x = x->get_next();
		}
		return quant;
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
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

	void Cria(string name, int quant, float preco);
	void InsereADireita(string name, int quant, float preco);
	void Insere(string name, int quant, float preco);

	void Remove(string name,int quant);

	float ProcuraNoRetornaPreco(string name); // retorna o preco

	bool Vazia();
	void exibeLista();
	int quantItens() const;



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

void Lista::Insere(string name, int quant, float preco){
	if ( Vazia() ){
		Cria(name,quant,preco);
	}else{
		InsereADireita(name,quant,preco);
	}

}

void Lista::Cria(string name, int quant, float preco){
	P = new NodeType();
	P->set_nome(name);
	P->set_quant(quant);
	P->set_preco(preco);
	P->set_next(NULL);
	//ID = 1;
}

void Lista::InsereADireita(string name, int quant, float preco){
	
	NodeType *Paux;
	Paux = P;
	bool Ok = false;


	while( Paux!=NULL && Ok==false ){

		if ( name == Paux->get_nome() ){ //caso já tenha o item
		 	Paux->set_quant(Paux->get_quant()+quant);
		 	Ok = true;
		}else{
			if( Paux->get_next()==NULL ){ //caso não tenha o item
				NodeType *Paux2 = new NodeType();
				Paux2->set_quant(quant);
				Paux2->set_nome(name);
				Paux2->set_preco(preco);
				Paux->set_next(Paux2);
				Ok = true;
			}else{
				Paux = Paux->get_next();//pula para o próximo
				// cout<<"pula"<<endl;
			}
		}	
	}
}

void Lista::Remove(string name, int quant){
	if( Vazia() ){
		cout<<"Nao ha itens para serem removidos"<<endl;
	}else{
		NodeType *Paux;
		NodeType *Paux2;
		Paux = P;
		bool Ok = false;

		if( name == Paux->get_nome() ){
			if( Paux->get_next()==NULL ){
				P->set_next(NULL);
				P = NULL;
				delete(Paux);
				Paux = NULL;
			}else if( Paux->get_next()!=NULL ){
				P = Paux->get_next();
				delete(Paux);
				Paux = NULL;
			}	
		}else{	
			while( Paux!=NULL && Ok==false ){
				Paux2 = Paux->get_next();
				if ( name == Paux2->get_nome() ){ //caso já tenha o item
					Paux->set_next(Paux2->get_next());
					delete(Paux2);
					Paux2 = NULL;
					Ok = true;
				}else{
					Paux = Paux->get_next();		
				}	
			}
		}
	}
}			


int Lista::quantItens()const{
	NodeType* x;
	x = P;
	if ( x==NULL ){
		return 0;
	}else{
		int y = 0;
		while( x!=NULL ){
			y++;
			x = x->get_next();
		}
		return y;
	}
}

void Lista::exibeLista(){
	NodeType *Aux;
	Aux = P; 

	if( Vazia() ){
		cout<<"Não ha itens"<<endl;
	}else{
		while( Aux!=NULL ){

			cout<<"ID: "<<Aux->get_id()<<endl;
			cout<<"Nome: "<<Aux->get_nome()<<endl;
			cout<<"Preco: "<<Aux->get_preco()<<endl;			
			cout<<"Quantidade: "<<Aux->get_quant()<<endl;
			cout<<endl;

			Aux = Aux->get_next();

		}
	}
}


float Lista::ProcuraNoRetornaPreco(string name){ 
	NodeType* Paux;
	Paux = P;

		while(Paux!=NULL){
			if( name == Paux->get_nome() ){
				return Paux->get_preco();
			}
			Paux = Paux->get_next();
		}
		return 0;
}


#endif




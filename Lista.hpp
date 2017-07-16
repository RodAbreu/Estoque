#ifndef LISTA_HPP
#define LISTA_HPP
#include <iostream>
#include "Nodetype.hpp"
#include <string>

using namespace std;


class Lista
{
public:
	Lista();
	~Lista();

	void cria(NodeType* x);
	void addItem();
	void exibeLista();
	int quantItens();
//	void vazia();
//	void cheia();
//	void procuraNo();
//	void removeNo();


private:
	NodeType* P;
};


Lista::Lista(){
	P = NULL;
	P->set_next(NULL);
}
Lista::~Lista(){}
	
void Lista::cria(NodeType* x){
	P = new NodeType;
	P = x;
	P->set_next(NULL);
}

void Lista::addItem(){
	
	while(P->get_next()!=NULL){
		P = P->get_next();
	}

	NodeType* x = new NodeType;

	x->set_id(quantItens()+1);

	cout<<"Digite o nome do item: "<<endl;
	string a;
	cin>>a;
	x->set_nome(a);

	cout<<"Digite a quantidade do item: "<<endl;
	int b;
	cin>>b;
	x->set_quant(b);

	P->set_next(x);
	delete(x);
}

int Lista::quantItens(){
	if (P==NULL){
		return 0;
	}else{
		int x = 0;
		while(P!=NULL){
			x++;
			P=P->get_next();
		}
	}
}

void Lista::exibeLista(){
	while(P!=NULL){

		cout<<"ID: "<<P->get_id()<<endl;
		cout<<"Nome: "<<P->get_nome()<<endl;
		cout<<"Quantidade: "<<P->get_quant()<<endl;
		cout<<endl;

		P=P->next;

	}
}





#endif
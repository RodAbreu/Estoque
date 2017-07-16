#ifndef LISTA_HPP
#define LISTA_HPP value
#include <iostream>
#include "NodeType.hpp"
#include <string>

using namespace std;

class Lista
{
public:
	Lista();
	~Lista();

	void addItem();
	void exibeLista();
	int quantItens() const;
	void hello();
//	void vazia();
//	void cheia();
//	void procuraNo();
//	void removeNo();


public:
	NodeType* P;
};


Lista::Lista(){
	P = NULL;	
	P->set_next(NULL);
}

Lista::~Lista(){}

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
	while(P!=NULL){

		cout<<"ID: "<<P->get_id()<<endl;
		cout<<"Nome: "<<P->get_nome()<<endl;
		cout<<"Quantidade: "<<P->get_quant()<<endl;
		cout<<endl;

		P->set_next(P->get_next());

	}
}

void Lista::hello(){
	cout<<"hello"<<endl;
}





#endif
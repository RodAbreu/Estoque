#ifndef LISTA_HPP
#define LISTA_HPP
#include <iostream>
#include "Nodetype.hpp"

using namespace std;


class Lista
{
public:
	Lista();
	~Lista();

	void cria(NodeType* x);
//	void vazia();
//	void cheia();
//	void procuraNo();
//	void removeNo();


private:
	NodeType* P;
};


Lista::Lista(){
	P = NULL;
}
Lista::~Lista(){}

void Lista::cria(NodeType* x){
	P = new NodeType;
	P = x;
	P->set_next(NULL);
}





#endif
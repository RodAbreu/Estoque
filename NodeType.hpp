#ifndef NODETYPE_HPP
#define NODETYPE_HPP
#include <iostream>
#include <string>


using namespace std;

class NodeType
{
public:
	NodeType();
	~NodeType();

	void constroiTudo(string vnome, int vquant);

	void set_id(int);
	int get_id() const;

	void set_nome(string);
	string get_nome() const;

	void set_quant(int);
	int get_quant() const;

	void set_preco(float);
	float get_preco() const;	


	void set_next(NodeType *);
	NodeType* get_next() const;


public:
	int id;
	string nome;
	int quant;
	float preco;
	NodeType* next;
};

NodeType::NodeType(){
	id = 0;
	next = NULL;
	quant = 0;
	preco = 0;
	nome = "";
}
NodeType::~NodeType(){}


void NodeType::constroiTudo(string vnome, int vquant){
	set_nome(vnome);
	set_quant(vquant);

}

void NodeType::set_id(int vid){
	this->id = vid;
}
int NodeType::get_id() const{
	return this->id;
}

void NodeType::set_nome(string vnome){
	this->nome = vnome;
}
string NodeType::get_nome() const{
	return this->nome;
}

void NodeType::set_quant(int vquant){
	this->quant = vquant;
}
int NodeType::get_quant() const{
	return this->quant;
}

void NodeType::set_preco(float vpreco){
	this->preco = vpreco;
}
float NodeType::get_preco() const{
	return this->preco;
}

void NodeType::set_next(NodeType *pnext){
	next = pnext;
}
NodeType* NodeType::get_next() const{
	return this->next;
}











#endif
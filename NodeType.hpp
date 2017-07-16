#ifndef NODETYPE_HPP
#define NODETYPE_HPP value
#include <iostream>
#include <string>


using namespace std;

class NodeType
{
public:
	NodeType();
	~NodeType();

	void set_id(int id);
	int get_id() const;

	void set_nome(string nome);
	string get_nome() const;

	void set_quant(int quant);
	int get_quant() const;


	void set_next(NodeType *);
	NodeType* get_next() const;


public:
	int id;
	string nome;
	int quant;
	NodeType* next;
};

NodeType::NodeType(){
	id = 0;
	next = NULL;
	quant = 0;
	nome = "";
}
NodeType::~NodeType(){}


void NodeType::set_id(int id){
	id = get_id();
}
int NodeType::get_id() const{
	return id;
}

void NodeType::set_nome(string nome){
	nome = get_nome();
}
string NodeType::get_nome() const{
	return nome;
}

void NodeType::set_quant(int quant){
	quant = get_quant();
}
int NodeType::get_quant() const{
	return quant;
}

void NodeType::set_next(NodeType *pnext){
	next = pnext;
}
NodeType* NodeType::get_next() const{
	return next;
}











#endif
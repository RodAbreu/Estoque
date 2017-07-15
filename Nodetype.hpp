#include <iostream>
#include <string.h>
#ifndef NODETYPE_HPP
#define NODETYPE_HPP

using namespace std;

class NodeType
{
public:
	NodeType();
	~NodeType();

	void set_id(int id);
	int get_id();

	void set_nome(string nome);
	string get_nome();

	void set_quant(int quant);
	int get_quant();


	void set_next(NodeType *);
	NodeType* get_next();


private:
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
//~NodeType(){}

void NodeType::set_id(int id){
	id = get_id();
}
int NodeType::get_id(){
	return id;
}

void NodeType::set_nome(string nome){
	nome = get_nome();
}
string NodeType::get_nome(){
	return nome;
}

void NodeType::set_quant(int quant){
	quant = get_quant();
}
int NodeType::get_quant(){
	return quant;
}

void NodeType::set_next(NodeType *pnext){
	next = pnext;
}
NodeType* NodeType::get_next(){
	return next;
}











#endif
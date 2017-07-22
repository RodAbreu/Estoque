#include "Lista.hpp"
#include "NodeType.hpp"
#include <iostream>
#include <string>

using namespace std;

//ERRO NA CRIAÇÃO DE UM OBJETO DA CLASSE LISTA


int main(int argc, char const *argv[])
{
	Lista teste;
	int decisao = -1;
	string name;
	int quant;
	float preco;

		cout<<"Ola, bem-vindo ao sistema de estoque!"<<endl;	

	while( decisao!=0 ){

		cout<<"Digite [0] para encerrar o programa."<<endl;
		cout<<"Digite [1] para exibir a lista de itens no estoque."<<endl;
		cout<<"Digite [2] para inserir um item no estoque."<<endl;
		cout<<"Digite [3] para remover um item no estoque."<<endl;
		cout<<"Digite [4] para mostrar a quantidade de itens no estoque. "<<endl;
		cout<<"Digite a sua escolha:";
		cin>>decisao;

		system("clear");
		switch( decisao ){
			case 0: break;

			case 1: teste.exibeLista();
					break;

			case 2: 
					cout<<"Digite o nome do item: ";
					cin>>name;
					cout<<"Digite a quantidade a ser inserida: ";	
					cin>>quant;	
					cout<<"O preco do item atualmente eh: "<<teste.ProcuraNoRetornaPreco(name)<<endl;
					cout<<"Caso deseje alterar digite outro preco, caso contrario digite o mesmo preco: ";
					cin>>preco;


					teste.Insere(name,quant,preco);
					break;


			case 3:
					cout<<"Digite o nome do item: ";
					cin>>name;
					cout<<"Digite a quantidade a ser removida: ";	
					cin>>quant;									
					teste.Remove(name,quant);	
					break;				

			case 4:
					cout<<"A quantidade de itens presentes no estoque eh: "<<teste.quantItens()<<endl;
					break;

		}
		cout<<endl<<endl;

	}




	return 0;
}
	
	
	// teste.Insere("rodrigo",10);
	// teste.Insere("renan",5);
	// teste.Insere("rodrigo",15);
	// teste.Remove("renan",3);
	// teste.Insere("olavo",4);
	// teste.Remove("olavo",3);
	// teste.Insere("marcos",4);
	// teste.Remove("rodrigo",3);

	// teste.exibeLista();




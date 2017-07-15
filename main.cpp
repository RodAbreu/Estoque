#include "Estoque.h"
#include "Item.h"
#include <iostream>
#define TAM 500


using namespace std;


int main(){
	Estoque lista;
	Item itens[TAM] ;
    
 //    cout<<"Ola, Madalena!"<<endl;
 //    cout<<"Bem vinda ao programa de gerenciamento de estoque!\n\n"<<endl;
 //    do{
 //    cout<<"Digite [1] - Verificar o estoque. \nDigite [2] - Inserir um item. \nDigite [3] - Vender um item. \nDigite [4] - Remover um item. \nDigite[5] - finalizar. \n"<<endl;
 //    cin>>decisao;//escolha do usuário
    
 //    switch (decisao)
 //    {
 //        case 1:
        	



 //        	// if(quant_itens_diferentes>0){
 //        	// 	for(int i=0;i<quant_itens_diferentes;i++){
 //        	// 		cout<<"\n\n";
 //        	// 		cout<<"Nome do item: "<<item[i].nome<<endl;
 //        	// 		cout<<"Quantidade do item: "<<item[i].quantidade<<endl;
 //        	// 		cout<<"Valor do item: "<<item[i].valor<<endl;		
 //        	// 		cout<<"\n\n";
 //        	// 	}
 //        	// }else{
 //        	// 	cout<<"Estoque vazio"<<endl;
 //        	// }
 //        	// break;
            
 //        case 2:
 //        	int decisao_2;
 //        	string name2;
 //        	int contador = 0;
 //        	do{
 //        		cout<<"Digite o nome do item: ";
 //        		cin>>name2;
 //        		for(int i=0;i<TAM;i++)
 //        		{
 //        			if(name2==item[i].nome){
 //        				cout<<"Esse item já existe no estoque, digite a quantidade que deseja acresentar ao estoque, ou digite 0 para cancelar."<<endl;
 //        				int quant_add;
 //        				cin >> quant_add;
 //        				item[i].quantidade += quant_add;
 //        				contador++;
 //        				break;
 //        			}
	// 			}
 //        		if(contador==0){
 //        			item[quant_itens_diferentes].nome = name2;				
	// 	        	cout<<"Digite a quantidade: ";
	// 	        	cin>>item[quant_itens_diferentes].quantidade;
	// 	        	cout<<"Digite o valor do item: ";
	// 	        	cin>>item[quant_itens_diferentes].valor;
 //        			quant_itens_diferentes++;
 //        			contador = 0;
 //        		}
 //        		cout<<"Digite 1 para continuar ou 0 para finalizar"<<endl;
 //        		do{
 //        		cin>>decisao_2;
 //        		}while(decisao_2!=1 && decisao_2!=0);
 //        		cout<<"\n---------------------------------\n\n"<<endl;
 //        	}while(decisao_2!=0);
 //            break;

 //         case 3:
 //         	cout<<"Os itens no estoque sao: "<<endl;
 //         	for(int i=0;i<TAM;i++)
 //         	{
 //         		cout<<i<<") "<<item[i].nome<<", quantidade: "<<item[i].quantidade<<endl;
 //         	}
 //         	cout<<endl;
 //         	cout<<"Digite o nome do item que deseja vender: "<<endl;
 //         	string nome_item_3;
 //         	cin>>nome_item_3;
 //         	cout<<"Digite a quantidade que deseja vender: "<<endl;
 //         	int quant_item_3;
 //         	cin>>quant_item_3;
 //         	int end_item_3;
 //         	for (int i = 0; i < TAM; i++)
 //         	{
 //         		if(nome_item_3==item[i].nome)
 //         		{
 //         			end_item_3 = i;
 //         		}

 //         	}
 //         	if (quant_item_3 == item[end_item_3].quantidade)
 //         	{
         			
 //         	}

	// }
	// }while(decisao!=5);

return 0;
}
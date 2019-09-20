#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct nodo{
	int valor;
	nodo* ptr;
	
	nodo(int aux=0){
        valor=aux;
        ptr=NULL;
    }
    
    void nuevo(int aux){
        nodo *actual=ptr;
        nodo *newnodo=new nodo(aux);
        if(actual!=NULL) while(actual->ptr!=NULL) actual=actual->ptr;
        if(actual==NULL) ptr=newnodo;
        else actual->ptr=newnodo;
    }
    void mostrar(){
        cout<<valor<<endl;
        nodo *actual=ptr;
        while(actual!=NULL){
            cout<<actual->valor<<endl;
            actual=actual->ptr;
        }
    }
    };
	void Menu(){
		cout<< "Menu" <<endl;
		cout<<"1.- Nuevo" <<endl;
		cout<<"2.- Mostrar" <<endl;
		cout<<"3.- Salir" <<endl;
		cout<<"->";
	}
nodo l1(0);

int main(int argc, char** argv){
	int op;
	
	while(true){
		Menu();
		cin>> op;
		
		if (op==1){
			cout<<"1.- Nuevo" <<endl;
			int aux;
			cout<< "Ingresar Dato: ";
			cin>> aux;
			l1.nuevo(aux);
		}
		if (op==2){
			cout<<"2.- Mostrar" <<endl;
			l1.mostrar();
		}
		if (op==3){
			break;
		}
		if (op<1 or op>3){
			cout<<"Error introduzca una opcion valida";
			void Menu();
		}
	}

    

	return 0;
}

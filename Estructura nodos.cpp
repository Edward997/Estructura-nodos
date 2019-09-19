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

nodo l1(3);

int main(int argc, char** argv){
	
	l1.nuevo(2);
    l1.nuevo(9);
    l1.nuevo(3);
    l1.nuevo(1);
    l1.mostrar();

	return 0;
}

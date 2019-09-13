#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct nodo{
	int valor;
	nodo* ptr;
	};

int main(int argc, char** argv){
	
	nodo* inicio;
	nodo* aux;
	
	inicio=NULL;
	aux= new nodo();
	
	aux->valor=5;
	aux->ptr=NULL;
	inicio=aux;
	
	aux= new nodo();
	aux->valor=6;
	aux->ptr=NULL;
	inicio -> ptr =aux;
	
	aux= new nodo();
	aux->valor=4;
	aux->ptr=NULL;
	inicio ->ptr ->ptr =aux;	
	
	aux= new nodo();
	aux->valor=1;
	aux->ptr=NULL;
	inicio ->ptr ->ptr ->ptr=aux;
	
	aux= new nodo();
	aux->valor=9;
	aux->ptr=NULL;
	inicio ->ptr ->ptr ->ptr ->ptr=aux;
	
	
	cout<< inicio->valor <<endl;
	cout<< inicio->ptr->valor <<endl;
	cout<< inicio->ptr->ptr->valor <<endl;
	cout<< inicio->ptr->ptr->ptr->valor <<endl;
	cout<< inicio->ptr->ptr->ptr->ptr->valor <<endl;
	
	

	
	struct nodo a,b,c,d,e;
	a.valor=4;
	a.ptr=NULL;
	b.valor=5;
	b.ptr=NULL;
	c.valor=8;
	c.ptr=NULL;
	d.valor=7;
	d.ptr=NULL;
	e.valor=9;
	e.ptr=NULL;
	 
	a.ptr=&b;
	b.ptr=&c;
	c.ptr=&d;
	d.ptr=&e;
	
	cout<<a.valor <<endl;
	cout<<a.ptr->valor<<endl;
	cout<<a.ptr->ptr->valor<<endl;
	cout<<a.ptr->ptr->ptr->valor<<endl;
	cout<<a.ptr->ptr->ptr->ptr->valor;

	return 0;
}

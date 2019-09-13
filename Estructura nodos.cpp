#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct nodo{
	int valor;
	nodo* ptr;
	};

int main(int argc, char** argv){
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
	
	cout<<a.valor;
	cout<<a.ptr->valor;
	cout<<a.ptr->ptr->valor;
	cout<<a.ptr->ptr->ptr->valor;
	cout<<a.ptr->ptr->ptr->ptr->valor;
	cout<<a.ptr->ptr->ptr->ptr->ptr->valor;
	

	
	return 0;
}

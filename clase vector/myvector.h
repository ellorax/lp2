#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;

class myvector{
	
	private: 
		int size, maxsize; //se determina el maxsize para que no viole memoria
		int*array;
		void alloc_new();//asignara nueva memoria
	
	public:
		myvector();//
		myvector(int);// este va a ser el tama�o m�ximo
		myvector(const myvector&)//constructor copia
		~myvector();
		void push_back(int)// agrega un elemento al final del vector
		int size();// llama al tama�o del vector
		int operator[](int);// nos da el elemento que queremos 
		myvector& operator=(const myvector&)//operador de asignacion
		int look(int i);//verifica si un elemento esta en el vector
		myvector& operator +=(int)
		
};

#include "myvec.inl"
#endif

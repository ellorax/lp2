#ifndef MY_STRING2_H
#define MY_STRING2_H

#include <iostream>

class String
{
	private: 
	    char*    palabra;
	    unsigned length;  // (largo)El numero de letras en una palabra
	
	public:
		
		//CONSTRUCTORES
	    String ( );					//Constructor por defecto
	    String (char c);			//Constructor
	    String (const char* c);		//Char array string constructor Toma en un string y crea un objeto
	    String (const String& s);	//Constructor de copia
		
	    ~String ( );				//Destructor
	
		//M�TODOS B�SICOS
	   	unsigned leng ( ) const;		// longitud constante
	
	    int indice (char c) const;		// Encontrar el �ndice char (localizaci�n)
			
		bool vacio();   	// si el string est� vacio retorna true sino false
		
		String substr(int, int);	// retorna un objeto que es el substring del objeto llamado
		
		//M�TODOS CASOS		
//	    void upcase (unsigned first, unsigned last);
//	
//	    void downcase (unsigned first, unsigned last);
	
	
	  	//  OPERADORES STREAM
	    friend ostream& operator<< (ostream& os, const String& s);	//cout << String 
	    friend istream& operator>> (istream& os, const  String& s);	//cin >> String
	  
		//OPERADORES DE ACCESO
	    char  operator[] (unsigned j) const;	// Referencia el acceso
	    char& operator[] (unsigned j);			//Copia acceso
	 	 
	 	 
	 	//OPERADORES DE ASIGNACI�N 
	    String& operator= (const String& s);
	
	    //OPERADORES L�GICOS
	    friend bool operator== (const String& izq, const String& der);	//Igualdad de ambos string
	   	  
	    friend bool operator!= (const String& izq, const String& der);	//Diferentes 
	  	friend bool operator<(const String& izq, const String& der);
	  	
};

#endif 

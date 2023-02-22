#include "personas.cpp"
#include <iostream>
using namespace std;

class cliente : Person{
	// atributos
	private : string nit;
	
		//constructor
		public :
		cliente (){
		}
		cliente (string nom, string apell, string direcc, string dat, int tele, string n):Person(nom,apell,direcc,dat,tele){
		nit = n;
	} 
	//metodos 
	// Set modificar
		void setNit(string n){nit=n;}
		void setNombres(string nom){nombres=nom;}
		void setApellidos(string apell){apellidos=apell;}
		void setDireccion(string direcc){direccion=direcc;}
		void setDate(string dat){date=dat;}
		void setTelefono(int tele){telefono=tele;}
		
	// get (mostrar)
		string getNit(){return nit;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		string getDate(){return date;}
		int getTelefono(){return telefono;}
	
	//Metodo Mostrar
	void mostrar(){
		cout<<"______________"<<endl;
		cout<<nit<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<telefono<<endl;
		
		
	}
};

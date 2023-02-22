#include "personas.cpp"
#include <iostream>
using namespace std;

class Empleado : Person{
	//atributos
	private : string cod_emp, pues;
	
		//Constructor
		public :
			Empleado(){
			}
			Empleado(string cod, string puesto, string nom, string apell, string direcc, string dat, int tele, string n):Person(nom,apell,direcc,dat,tele){
				cod_emp = cod;
				pues = puesto;
								
			}
	//metodos 
	// Set modificar
		void setCod(string cod){cod_emp=cod;}
		void setPuesto(string puesto){pues=puesto;}
		void setNombres(string nom){nombres=nom;}
		void setApellidos(string apell){apellidos=apell;}
		void setDireccion(string direcc){direccion=direcc;}
		void setDate(string dat){date=dat;}
		void setTelefono(int tele){telefono=tele;}
		
	// get (mostrar)
	    string getCod(string cod){cod_emp=cod;}
		string getPuesto(string puesto){pues=puesto;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		string getDate(){return date;}
		int getTelefono(){return telefono;}
	
	//Metodo Mostrar
	void mostrar(){
		cout<<"______________"<<endl;
		cout<<cod_emp<<", "<<pues<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<telefono<<endl;
}
};

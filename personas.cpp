
#include <iostream>
using namespace std;

class Person {
	//Atributos
	protected : string nombres, apellidos, direccion, date; 
				int telefono;
				
		//Constructo
		protected : 
			Person(){
			
			};
		Person (string nom, string apell, string direcc, string dat,int tele){
			nombres = nom;
			apellidos = apell;
			direccion = direcc;
			date = dat;
			telefono = tele;			
			
		}
	//metodo
		void mostrar();
				
	
};

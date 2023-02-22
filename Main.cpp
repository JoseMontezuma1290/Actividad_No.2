#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombre, apellido, direccion, date,;
	int telefono;
	cout<<"Ing. Nit ";
	cin>>nit;
	cout<<"Ing. Nombre ";
	cin>>nombre;
	cout<<"Ing. Apellido ";
	cin>>apellido;
	cout<<"Ing. Direccion ";
	cin>>direccion;
	cout<<"Ing. Fecha de nacimiento ";
	cin>>date;
	cout<<"Ing. Telefono ";
	cin>>telefono;
	
	//Instancia de un objeto
	cliente obj = cliente(nombre,apellido,direccion,date,telefono,nit);
	obj.mostrar(); 
	
	//Modificar Nit
	cout<<"Ing. Nit ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	//Modificar Codigo de empleado
	
	
	
}

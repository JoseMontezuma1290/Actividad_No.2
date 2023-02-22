
#include "empleado.cpp"
#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombre, apellido, direccion, date,pues, cod;
	int telefono;
	cout<<"Ing. Codigo de Trabajador: ";
	cin>>cod;
	cout<<"Ing. Puesto del Trabajador: ";
	cin>>pues;
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
	cout<<"Modificar Nit!! "<<endl;
	cout<<"Ing. Nit ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	
	//Modificar Codigo de empleado
	Empleado obj2 = Empleado(cod,pues,nombre,apellido,direccion,date,telefono);
	obj2.mostrar();
	
	cout<<"Modificar codigo de empleado"<<endl;
	cout<<"Ing. Nuevo Codigo de empleado: ";
	cin>>cod;
	obj2.setCod(cod);
	obj2.mostrar();
	
	
}

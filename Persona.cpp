#include <iostream>
using namespace std;
//esto es la clase persona
class Persona {
	//Atributos: nombres, apellidos, direccion, telefono, fecha_nacimiento
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	
	//constructor
	Persona(){
	}
	
	Persona(string nom, string ape, string dir, int tel, string fecha){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fecha;
	}
	//metodos crud = crear, leer, actualizar, borrar
	void crear();
	void leer();
	void actualizar();
	void borrar();
	
};

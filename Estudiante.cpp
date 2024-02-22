#include "Persona.cpp"
#include <iostream>

using namespace std;
class Estudiante : Persona {
	//Atributos: carnet
	private : string carnet;
	
	// constructor
	public : 
	Estudiante(){
	}
	Estudiante(string nom, string ape, string dir, int tel, string fecha, string car) : Persona(nom,ape,dir,tel,fecha){
		carnet = car;
	}
	
	//metodo crud: leer
	void leer(){
		cout<<carnet<<endl;
		cout<<nombres<<endl;
		cout<<apellidos<<endl;
		cout<<direccion<<endl;
		cout<<telefono<<endl;
		cout<<fecha_nacimiento<<endl;
	}
};

#include <iostream>
using namespace std;
class Persona{
	protected :
		string nombres,apellidos,direccion,fn;
		
		Persona(){}
		Persona(string n,string a,string d,string f){
			nombres = n;
			apellidos = a;
			direccion = d;
			fn = f;
		}
		
		void crear();
		void leer();
		void actualizar();
		void borrar();
		
};

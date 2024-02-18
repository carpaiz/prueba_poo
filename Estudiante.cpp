#include "Persona.cpp"
#include <iostream>

using namespace std;
class Estudiante : Persona{
	private :
	string codigo;
	public :
		Estudiante(){}
		Estudiante (string c,string n,string a,string d,string f) : Persona(n,a,d,f){
			codigo = c;
			
		}
		void leer(){
			cout<<nombres<<endl;
		}
	 
};

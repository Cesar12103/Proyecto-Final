#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>

using namespace std;

/*Se crea la clase Paciente que se encargará de
administrar los datos y funciones de cada paciente 
que se registre*/
class Paciente 
{
	private: //atributos de la clase Paciente
		int edad;
		int sintomas;
		string nombre;
		float temperatura;
		int cuarto;
		
		
	public: //metodos de la clase Paciente
		
		Paciente(); //constructor
		void leer();
		void set_edad(int);
		int get_edad();
		void set_nombre(string);
		string get_nombre();
		void set_temperatura(float);
		float get_temperatura();
		void set_cuarto(int);
		int get_cuarto();
		void set_sintomas(int);
		int get_sintomas();
		
		
					
};



#endif

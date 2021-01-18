#ifndef CASA_H
#define CASA_H
#include "Paciente.h"
#include <string>

/*Se crea la clase Casa (hija) que hereda atributos de la clase Paciente*/
class Casa : public Paciente 
{
	private: //Atributos de la clase heredera
		string descripcion_sintomas;
	
	public: //Métodos de la clase Casa
		Casa();//Constructor
	
		void set_descripcion(string);
		string get_descripcion();		
		void Alta();
};
#endif

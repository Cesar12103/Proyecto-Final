#ifndef CONSULTA_H
#define CONSULTA_H
#include <string>
#include "Paciente.h"
using namespace std;

/*Se crea la clase Covid (hija) que hereda atributos de la clase Paciente*/
class Consulta : public Paciente 
{
	private: //Atributos de la clase heredera
	string descripcion_sintomas;
			
	public: //Métodos de la clase Consulta
	Consulta(); //constructor
	void set_descripcion(string);
	string get_descripcion();	
	void Alta();
};

#endif

#include "Paciente.h"
#include <string>

using namespace std;

/*Implementaci�n de los m�todos para la clase paciente,
para estos m�todos se utilizan getters y setters*/
Paciente::Paciente()//Constructor de la clase Paciente
{
	
}

void Paciente::set_edad(int _edad) //Se inicializa el atributo edad con el m�todo set
{
	edad=_edad;
}

void Paciente::set_nombre(string _nombre) //Se inicializa el atributo nombre con el m�todo set
{
	nombre=_nombre;
}

void Paciente::set_temperatura(float _temperatura) //Se inicializa el atributo temperatura con el m�todo set
{
	temperatura=_temperatura;
}

void Paciente::set_cuarto(int _cuarto) //Se inicializa el atributo cuarto con el m�todo set
{
	cuarto=_cuarto;
}

void Paciente::set_sintomas(int _sintomas) //Se inicializa el atributo s�ntomas con el m�todo set
{
	sintomas=_sintomas;
}

int Paciente::get_edad() //Este m�todo obtiene lo que hay en el atributo edad y lo devuelve con return
{
	return edad;
}

string Paciente::get_nombre() //Este m�todo obtiene lo que hay en el atributo nombre y lo devuelve con return
{
	return nombre;	
}

float Paciente::get_temperatura() //Este m�todo obtiene lo que hay en el atributo temperatura y lo devuelve con return
{
	return temperatura;
}

int Paciente::get_cuarto() //Este m�todo obtiene lo que hay en el atributo cuarto y lo devuelve con return
{
	return cuarto;
}

int Paciente::get_sintomas() //Este m�todo obtiene lo que hay en el atributo sintomas y lo devuelve con return
{
	return sintomas;
}

/*M�todo leer de la clase paciente, esto lee los datos
almacenados en cada atributo de la clase y los imprime*/	





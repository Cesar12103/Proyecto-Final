#include "Paciente.h"
#include <string>

using namespace std;

/*Implementación de los métodos para la clase paciente,
para estos métodos se utilizan getters y setters*/
Paciente::Paciente()//Constructor de la clase Paciente
{
	
}

void Paciente::set_edad(int _edad) //Se inicializa el atributo edad con el método set
{
	edad=_edad;
}

void Paciente::set_nombre(string _nombre) //Se inicializa el atributo nombre con el método set
{
	nombre=_nombre;
}

void Paciente::set_temperatura(float _temperatura) //Se inicializa el atributo temperatura con el método set
{
	temperatura=_temperatura;
}

void Paciente::set_cuarto(int _cuarto) //Se inicializa el atributo cuarto con el método set
{
	cuarto=_cuarto;
}

void Paciente::set_sintomas(int _sintomas) //Se inicializa el atributo síntomas con el método set
{
	sintomas=_sintomas;
}

int Paciente::get_edad() //Este método obtiene lo que hay en el atributo edad y lo devuelve con return
{
	return edad;
}

string Paciente::get_nombre() //Este método obtiene lo que hay en el atributo nombre y lo devuelve con return
{
	return nombre;	
}

float Paciente::get_temperatura() //Este método obtiene lo que hay en el atributo temperatura y lo devuelve con return
{
	return temperatura;
}

int Paciente::get_cuarto() //Este método obtiene lo que hay en el atributo cuarto y lo devuelve con return
{
	return cuarto;
}

int Paciente::get_sintomas() //Este método obtiene lo que hay en el atributo sintomas y lo devuelve con return
{
	return sintomas;
}

/*Método leer de la clase paciente, esto lee los datos
almacenados en cada atributo de la clase y los imprime*/	





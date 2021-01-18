#include "Consulta.h"
#include <string>

using namespace std;

Consulta::Consulta() //Constructor de la clase Consulta
{
	
};



/*Método que recupera lo que se encuentra en la cadena string de la descripción síntomas 
y la asigna a síntomas*/
void Consulta::set_descripcion(string _descripcion) 
{
	descripcion_sintomas=_descripcion;
}

string Consulta::get_descripcion() //Método que regresa una cadena string para la obtencion de la descripción de sintomas
{
	return descripcion_sintomas;
}


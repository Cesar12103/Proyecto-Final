#include "Casa.h"
#include <string>

using namespace std;

Casa::Casa() //Constructor de la clase Casa
{
	
}

/*Método que recupera lo que se encuentra en la cadena string de la descripción síntomas 
y la asigna a síntomas*/
void Casa::set_descripcion(string _descripcion) 
{
	descripcion_sintomas=_descripcion;
}

string Casa::get_descripcion() //Método que regresa una cadena string para la obtencion de la descripción de sintomas
{
	return descripcion_sintomas;
}


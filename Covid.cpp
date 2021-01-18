#include "Covid.h"
#include <string>

using namespace std;
Covid::Covid() //Constructor de la clase Covid
{
	
}



/*Método que recupera lo que se encuentra en la cadena string de la descripción síntomas 
y la asigna a síntomas*/
void Covid::set_descripcion(string _descripcion)
{
	descripcion_sintomas=_descripcion;
}

string Covid::get_descripcion() //Método que regresa una cadena string para la obtencion de la descripción de sintomas
{
	return descripcion_sintomas;
}


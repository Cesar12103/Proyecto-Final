#include "Consulta.h"
#include <string>

using namespace std;

Consulta::Consulta() //Constructor de la clase Consulta
{
	
};



/*M�todo que recupera lo que se encuentra en la cadena string de la descripci�n s�ntomas 
y la asigna a s�ntomas*/
void Consulta::set_descripcion(string _descripcion) 
{
	descripcion_sintomas=_descripcion;
}

string Consulta::get_descripcion() //M�todo que regresa una cadena string para la obtencion de la descripci�n de sintomas
{
	return descripcion_sintomas;
}


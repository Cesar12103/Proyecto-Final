#include "Casa.h"
#include <string>

using namespace std;

Casa::Casa() //Constructor de la clase Casa
{
	
}

/*M�todo que recupera lo que se encuentra en la cadena string de la descripci�n s�ntomas 
y la asigna a s�ntomas*/
void Casa::set_descripcion(string _descripcion) 
{
	descripcion_sintomas=_descripcion;
}

string Casa::get_descripcion() //M�todo que regresa una cadena string para la obtencion de la descripci�n de sintomas
{
	return descripcion_sintomas;
}


#include <iostream>
#include <string>
#include "Paciente.h"
#include "Consulta.h"
#include "Covid.h"
#include "Casa.h"
using namespace std;

//Declaraci�n de funciones
int ingresocontrasena();
void bienvenida();
void menu();
void eleccion();
void informacionHospital();
void textocasa();
void textoconsulta();
void tectovoid();
void escribirInfoPaciente();
void leerInfoPaciente();



void Paciente::leer()
{
	cout<<"\t\t\t\t\t\n\n\n\n\t\t\t\t\t";
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"Edad: "<<edad<<endl;
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"Temperatura: "<<temperatura<<endl;
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"Numero de cuarto: "<<cuarto<<endl;
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"Cantidad de Sintomas Mostrados: "<<sintomas<<endl;
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
}

void Consulta::Alta() //Metodo que muestra un mensaje para la alta en caso de que el �rea designada sea una consulta
{
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"Los sintomas mostrados son: "<<descripcion_sintomas;
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
	cout<<"TIEMPO ESTIMADO PARA EL ALTA: PREGUNTAR AL DOCTOR A CARGO";
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
	cout<<"CONSULTA MEDICA ASIGNADA ";
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t"<<endl;
}

void Covid::Alta() //Metodo que muestra un mensaje para la alta en caso de que el �rea designada sea Covid
{
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"LOS S�NTOMAS MOSTRADOS SON: "<<descripcion_sintomas;
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
	cout<<"ALTA NEGADA";
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
	cout<<"PACIENTE AISLADO";
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"TIEMPO ESTIMADO PARA EL ALTA: 15 DIAS"<<endl;
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"OBSERVACION 24/7";
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"EL PACIENTE PRESENTA OXIGENACION BAJA";
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t"<<endl;
}

void Casa::Alta() //Metodo que muestra un mensaje para la alta en caso de que el �rea designada sea una consulta
{
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"Los sintomas mostrados son: "<<descripcion_sintomas;
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
	cout<<"ALTA INMEDIATA";
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
	cout<<"PACIENTE REGRESA Y PERMANECE EN SU HOGAR CON CONSTANTE OBSERVACION  DESPUES DE REALIZAR LA PRUEBA DE COVID-19";
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"NO PRESENTA GRAVEDAD POR LOS SINTOMAS MOSTRADOS";
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t"<<endl;
}


/*Se crea un areeglo por cada �rea delimitando el espacio disponible por cada una,
en este caso se asignaron 10*/
Casa Dato1[10];
Consulta Dato2[10];
Covid Dato3[10];

int auxa=0;
int auxb=0;
int auxc=0;
int aux1=10;
int aux2=10;
int aux3=10;

int main()
{
	setlocale(LC_ALL,""); //Para que se visualicen en las impresiones los acentos
	
	
	/*Si la funci�n ingresocontrasena regresa un 1 deja pasar a la siguiente parte del programa, 
	dando acceso, en caso de no ser as�, limpia los intentos anteriores y reinicia el conteo de intentos*/
	if(ingresocontrasena()==1) 
	{
	bienvenida();
	eleccion();
	}
}


int ingresocontrasena() //Funci�n para ingresar contrase�a al inicio del programa
{	
	/*Declaraci�n de variables para conteo y l�mite de intentos*/
	int pass{0};
	int intentos{3}; 
	const int clavecorrecta{1234};
	
	do
	{
		/*Ingreso de la contrase�a*/
		cout<<"\t\t\t\t\t\n\n\n\n\t\t\t\t\t";
		cout<<"PARA ACCEDER";
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"INGRESE LA CONTRASE�A CORRECTA: ";
		cin>>pass;
		cout<<endl;
		
		/*Si la variable pass no coincide con la clave correcta entonces imprime el numero de intento 
		y una advertencia, se suma en la variable intentos*/
		if(pass!=clavecorrecta) 
		{
			cout<<"\t\t\t\t\t";
			cout<<"CONTRASE�A INCORRECTA"<<endl;
			cout<<"\t\t\t\t\t";
			cout<<"INTENTOS RESTANTES: "<<intentos-1<<endl;
			intentos--;
		}
		
		/*Se establece un l�mite de intentos y al llegar a es cantidad, 
		se repite el proceso hasta ingresar la contrase�a correcta*/
		if(intentos==0)
		{
			cout<<"\t\t\t\t\t\n\n\n\n\t\t\t\t\t";
			cout<<"L�MITE DE INTENTOS ALCANZADO, INTENTE DE NUEVO"<<endl;
			intentos=3;
			system("pause");
			system("cls");
		}
	}
	
	/*Lo anterior se repite mientras la variable pass no sea igual a la clave correcta,
	cuando es igual sale del ciclo y regresa un 1 al main dando paso a la siguiente parte
	del programa*/
	while (pass!=clavecorrecta);
	system("cls");
	cout<<"CONTRASE�A CORRECTA\nACCEDIENDO..."<<endl;
	return 1;
}


/*Funci�n que desplega o imprime un mensaje de Bienvenida al usuario*/
void bienvenida()
{
	cout<<"\t\t\t\t\t _________________________________________________________________________________________ \n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                          		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                     BIENVENIDOS AL                                      |\n";
	cout<<"\t\t\t\t\t|                                                                                         |\n";
	cout<<"\t\t\t\t\t|                                     HOSPITAL COVID                                      |\n";
	cout<<"\t\t\t\t\t|                                                                                         |\n";
	cout<<"\t\t\t\t\t|                               DONDE ADMINISTRAMOS A CADA                                |\n";
	cout<<"\t\t\t\t\t|                                                                                         |\n";
	cout<<"\t\t\t\t\t|                           UNO DE NUESTROS PACIENTES Y CON LA                            |\n";
	cout<<"\t\t\t\t\t|                                                                                         |\n";
	cout<<"\t\t\t\t\t|                    ORGANIZACI�N QUE CUALQUIER HOSPITAL DESEAR�A TENER                   |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|_________________________________________________________________________________________|\n";
	cout<<"\t\t\t\t\t\n\n\n\n\t\t\t\t\t";
	system("Pause");
	system("cls");
}

/*Funci�n que imprime el men� con las diferentes operaciones disponibles*/ 
void menu()
{
	cout<<"\t\t\t\t\t _________________________________________________________________________________________ \n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                          		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                      ELIJA UNA OPCI�N (1-4)                         		          |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                      1. INFORMACI�N DEL HOSPITAL                                        |\n";
	cout<<"\t\t\t\t\t|                      2. REGISTRO DE PACIENTE                                            |\n";
	cout<<"\t\t\t\t\t|                      3. HISTORIAL DEL PACIENTE                                          |\n";
	cout<<"\t\t\t\t\t|                      4. FIN DEL PROGRAMA                                                |\n";
	cout<<"\t\t\t\t\t|                                                                                         |\n";
	cout<<"\t\t\t\t\t|                                                                                         |\n";
	cout<<"\t\t\t\t\t|                                                                                         |\n";
	cout<<"\t\t\t\t\t|_________________________________________________________________________________________|\n";
	cout<<"\t\t\t\t\t\n\n\n\n\t\t\t\t\t";
}

/*Funci�n que sirve para ingresar el n�mero de la operaci�n que se desea emplear 
mediante un switch*/ 
void eleccion()
{
	int operacion{0};
	
	do
	{
	menu();
	cout<<"Seleccione la operaci�n que desea ejecutar: ";
	cin>>operacion;
	cout<<endl;
	system("cls");

	switch(operacion)
		{
			case 1: 
					informacionHospital(); //Invoca a la funci�n con la informaci�n del proyecto en caso de escoger el n�mero 1
					break;
			case 2: 
					escribirInfoPaciente(); //Invoca a la funcion escribirInfoPaciente para ingresar los datos de un paciente nuevo
					break;
			case 3:
					
					leerInfoPaciente(); //Invoca a la funcion leerInfoPaciente para ingresar los datos de un paciente nuevo
					break;
			case 4:
					break; //Si se escoge el 4 se termina el programa automaticamente
		}
	}
	while(operacion!=4);
}

/*Funci�n que imprime los detalles del proyecto*/
void informacionHospital()
{
	cout<<"\t\t\t\t\t _________________________________________________________________________________________ \n";
	cout<<"\t\t\t\t\t|                                           		                                  |\n";
	cout<<"\t\t\t\t\t|                     PROYECTO ADMINISTRACI�N HOSPITAL COVID                      	  |\n";
	cout<<"\t\t\t\t\t|                                               		                          |\n";
	cout<<"\t\t\t\t\t|                  Creado y Desarrollado por:                 		                  |\n";
	cout<<"\t\t\t\t\t|                  - Archunda Baz�n Aar�n Antonio   		                          |\n";
	cout<<"\t\t\t\t\t|                  - Guerrero V�lez Eliseo Milton                                         |\n";
	cout<<"\t\t\t\t\t|                  - Hern�ndez V�zquez C�sar Arturo                                       |\n";
	cout<<"\t\t\t\t\t|                                                                                         |\n";
	cout<<"\t\t\t\t\t|                  Grupo: 1BM3                                                            |\n";
	cout<<"\t\t\t\t\t|                  Profesor: Huerta Trujillo Iliac                                        |\n";
	cout<<"\t\t\t\t\t|                  Materia: Programaci�n Orientada a Objetos                              |\n";
	cout<<"\t\t\t\t\t|                                                                                         |\n";
	cout<<"\t\t\t\t\t|_________________________________________________________________________________________|\n";
	cout<<"\t\t\t\t\t\n\n\n\n\t\t\t\t\t";
	system("pause");
	system("cls");
}

/*Funci�n que sirve para ingresar los datos del paciente 
en caso de solo presentar de 0 a 2 s�ntomas*/
void textocasa()
{
	/*Se declaran variables a,b,c y d para regustrar los datos del paciente y guardarlos*/
	string a,e;
	int b;
	float c;
	int d;
	
		cout<<"\t\t\t\t\t\n\n\n\t\t\t\t\t";
		cout<<"INTRODUZCA EL NOMBRE DEL PACIENTE: ";
		cin>>a;
		
		do //Do-While que sirve para limitar el rango de entrada para la edad 
		{
			cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
			cout<<"RANGO V�LIDO DE 0 A 100 A�OS";
			cout<<"\t\t\t\t\t\n\t\t\t\t\t";
			cout<<"INTRODUZCA SU EDAD: ";
			cin>>b;	
			cout<<endl;	
		}while(b<1||b>100);

		do //Do-While que sirve para limitar el rango de entrada para la temperatura
		{
			cout<<"\t\t\t\t\t\n\t\t\t\t\t";
			cout<<"RANGO V�LIDO DE 35�C a 45�C";
			cout<<"\t\t\t\t\t\n\t\t\t\t\t";
			cout<<"INTRODUZCA LA TEMPERATURA REGISTRADA: ";
			cin>>c;	
			cout<<endl;
		}while(c<35 || c>45);
		
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"INTRODUZCA EL N�MERO DE CUARTO DE PRUEBAS QUE SE LE ASIGNAR� AL PACIENTE: ";
		cin>>d;
		
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"INTRODUZCA LOS S�NTOMAS: ";
		cin>>e;
		cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
		cout<<"GUARDANDO...";
		cout<<endl;
	
		/*En el arreglo de Dato 1 que es para pacientes que presentan de 0 a 2 s�ntomas
		se utiliza la variable auxa para asignar el espacio del arreglo en donde
		el m�todo set_x guardar� los datos para esta �rea*/
		Dato1[auxa].set_nombre(a);
		Dato1[auxa].set_edad(b);
		Dato1[auxa].set_temperatura(c);	
		Dato1[auxa].set_cuarto(d);
		Dato1[auxa].set_descripcion(e);	
		system("pause");
		system("cls");
}

/*Funci�n que sirve para ingresar los datos del paciente 
en caso de solo presentar 3 s�ntomas*/
void textoconsulta()
{
	//Se declaran variables a,b,c y d para regustrar los datos del paciente y guardarlos  
	string a,e;
	int b;
	float c;
	int d;
	
	cout<<"\t\t\t\t\t\n\n\n\t\t\t\t\t";
	cout<<"INTRODUZCA EL NOMBRE DEL PACIENTE: ";
	cin>>a;
	do //Do-While que sirve para limitar el rango de entrada para la edad
	{
		cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
		cout<<"RANGO V�LIDO DE 0 A 100 A�OS";
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"INTRODUZCA SU EDAD: ";
		cin>>b;		
	}while(b<1 || b>100);

	do //Do-While que sirve para limitar el rango de entrada para la temperatura
	{
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"RANGO V�LIDO DE 35�C a 45�C";
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"INTRODUZCA LA TEMPERATURA REGISTRADA: ";
		cin>>c;	
	}while(c<35 || c>45);
	
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"INTRODUZCA EL N�MERO DE CUARTO QUE SE LE ASIGNAR� AL PACIENTE: ";
	cin>>d;

	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"INTRODUZCA LOS S�NTOMAS: ";
	cin>>e;
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
	cout<<"GUARDANDO...";
	cout<<endl;
	
	/*En el arreglo de Dato 2 que es para pacientes con 3 s�ntomas
	se utiliza la variable auxb para asignar el espacio del arreglo en donde
	el m�todo set_x guardar� los datos para esta �rea*/
	Dato2[auxb].set_nombre(a);
	Dato2[auxb].set_edad(b);
	Dato2[auxb].set_temperatura(c);	
	Dato2[auxb].set_cuarto(d);
	Dato2[auxb].set_descripcion(e);
	system("pause");
	system("cls");
}

/*Funci�n que sirve para ingresar los datos del paciente 
en caso de solo presentar 4 s�ntomas*/
void textocovid()
{
	//Se declaran variables a,b,c y d para regustrar los datos del paciente y guardarlos
	string a,e;
	int b;
	float c;
	int d;
	
	cout<<"\t\t\t\t\t\n\n\n\t\t\t\t\t";
	cout<<"INTRODUZCA EL NOMBRE DEL PACIENTE: ";
	cin>>a;
	do //Do-While que sirve para limitar el rango de entrada para la edad
	{
		cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
		cout<<"RANGO V�LIDO DE 0 A 100 A�OS";
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"INTRODUZCA SU EDAD: ";
		cin>>b;		
	}while(b<1 || b>100);

	do //Do-While que sirve para limitar el rango de entrada para la temperatura
	{
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"RANGO V�LIDO DE 35�C a 45�C";
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"INTRODUZCA LA TEMPERATURA REGISTRADA: ";
		cin>>c;	
	}while(c<35 || c>45);
	
	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"INTRODUZCA EL N�MERO DE CUARTO QUE SE LE ASIGNAR� AL PACIENTE: ";
	cin>>d;

	cout<<"\t\t\t\t\t\n\t\t\t\t\t";
	cout<<"INTRODUZCA LOS S�NTOMAS: ";
	cin>>e;
	cout<<"\t\t\t\t\t\n\n\t\t\t\t\t";
	cout<<"GUARDANDO...";
	cout<<endl;
	
	/*En el arreglo de Dato 3 que es para pacientes con 4 o m�s s�ntomas
	se utiliza la variable auxc para asignar el espacio del arreglo en donde
	el m�todo set_x guardar� los datos para esta �rea*/
	Dato3[auxc].set_nombre(a);
	Dato3[auxc].set_edad(b);
	Dato3[auxc].set_temperatura(c);	
	Dato3[auxc].set_cuarto(d);
	Dato3[auxc].set_descripcion(e);
	system("pause");
	system("cls");
}

/*Funci�n que se utiliza para Introducir el n�mero de
s�ntomas para asignar un �rea en espec�fico, adem�s de que 
tambi�n selecciona el n�mero de cama en el que se quiere ingresar al paciente
en esta �rea*/
void escribirInfoPaciente()
{
	int a; //Variable para el n�mero de s�ntomas
	do //Do-While que sirve para validar la entrada del n�mero de s�ntomas
	{
		cout<<"\t\t\t\t\t\n\n\n\t\t\t\t\t";
		cout<<"INTRODUZCA EL N�MERO DE SINTOMAS PARA ASIGNAR �REA: ";
		cin>>a;	
		cout<<endl;
	}while(a<0||a>4);

	if(a==0||a==1||a==2) //Si el n�mero de s�ntomas es 0, 1 � 2 entonces...
	{
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"ES NECESARIO REALIZAR UNA PRUEBA PARA DESCARTAR COVID-19";
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"TENEMOS "<<aux1;
		cout<<" ESPACIOS PARA PRUEBAS DISPONIBLES, POR FAVOR SELECCIONE";
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"EL N�MERO DE ESPACIO PARA REALIZAR LA PRUEBA";
		cout<<endl;
		
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"SELECCIONE EL N�MERO DE ESPACIO QUE OCUPARA EL PACIENTE: ";
		cin>>auxa;
		cout<<endl;
		auxa--;
		Dato1[auxa].set_sintomas(a); //En el valor auxa del arreglo Dato1 se guardar�n los s�ntomas que el m�todo set obtenga
		textocasa(); //Se invoca la funci�n para el texto del �rea asignada		
		aux1--;
	}
	else if(a==3) //Si el n�mero de s�ntomas es 3...
	{
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"TENEMOS "<<aux2;
		cout<<" CAMAS DISPONIBLES, POR FAVOR SELECCIONE";
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"EL N�MERO DE CAMA QUE DESEA ASIGNARLE AL PACIENTE";
		cout<<endl;
		
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"SELECCIONE EL N�MERO DE CAMA QUE OCUPARA EL PACIENTE: ";
		cin>>auxb;
		auxb--;
		
		Dato2[auxb].set_sintomas(a); //En el valor auxb del arreglo Dato2 se guardar�n los s�ntomas que el m�todo set obtenga
		textoconsulta(); //Se invoca la funci�n para el texto del �rea asignada
		aux2--;
	}
	else if(a>=4) //Si el n�mero de s�ntomas es 4 o m�s entonces...
	{
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"TENEMOS "<<aux3;
		cout<<" CAMAS DISPONIBLES, POR FAVOR SELECCIONE";
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"EL N�MERO DE CAMA QUE DESEA ASIGNARLE AL PACIENTE";
		cout<<endl;
		
		cout<<"\t\t\t\t\t\n\t\t\t\t\t";
		cout<<"SELECCIONE EL N�MERO DE CAMA QUE OCUPARA EL PACIENTE: ";
		cin>>auxc;
		auxc--;
		
		
		Dato3[auxc].set_sintomas(a); //En el valor auxc del arreglo Dato3 se guardar�n los s�ntomas que el m�todo set obtenga
		textocovid(); //Se invoca la funci�n para el texto del �rea asignada
		aux3--;
	}
}

/*Funci�n que al ser invocada pregunta por la cantidad de s�ntomas para dirigirse a un �rea 
en espec�fico y despu�s preguntar el n�mero de la cama para mostrar los detalles del 
paciente que se esta buscando*/
void leerInfoPaciente()
{
	int a; //Variable para el n�mero de s�ntomas
	do //Do-While que sirve para validar la entrada del n�mero de s�ntomas
	{
		cout<<"\t\t\t\t\t\n\n\n\t\t\t\t\t";
		cout<<"INTRODUZCA EL N�MERO DE SINTOMAS PARA BUSCAR POR �REA: ";
		cin>>a;
		cout<<endl;	
	} while(a<0||a>4);

	if(a==0||a==1||a==2) //Si el n�mero de s�ntomas es 0, 1 � 2 entonces...
	{
		cout<<"\t\t\t\t\t\n\n\n\t\t\t\t\t";
		cout<<"SELECCIONE EL ESPACIO DE PRUEBAS QUE DESEA VISUALIZAR: ";
		cin>>auxa;
		cout<<endl;
		auxa--;
		Dato1[auxa].leer(); //Al arreglo Dato1 en el espacio auxa se le aplica el m�todo Leer
		Dato1[auxa].Alta(); //Al arreglo Dato1 en el espacio auxa se le aplica el m�todo Alta
		system("pause");
		system("cls");
	}
	else if(a==3) //Si el n�mero de s�ntomas es 3...
	{
		cout<<"\t\t\t\t\t\n\n\n\t\t\t\t\t";
		cout<<"SELECCIONE LA CAMA QUE DESEA VISUALIZAR: ";
		cin>>auxb;
		cout<<endl;
		auxb--;
		Dato2[auxb].leer(); //Al arreglo Dato2 en el espacio auxb se le aplica el m�todo Leer
		Dato2[auxb].Alta(); //Al arreglo Dato2 en el espacio auxb se le aplica el m�todo Alta
		system("pause");
		system("cls");
	}
	else if(a>=4) //Si el n�mero de s�ntomas es 4 o m�s entonces...
	{
		cout<<"\t\t\t\t\t\n\n\n\t\t\t\t\t";
		cout<<"SELECCIONE LA CAMA QUE DESEA VISUALIZAR: ";
		cin>>auxc;
		auxc--;
		cout<<endl;
		Dato3[auxc].leer(); //Al arreglo Dato3 en el espacio auxc se le aplica el m�todo Leer
		Dato3[auxc].Alta(); //Al arreglo Dato3 en el espacio auxc se le aplica el m�todo Alta
		system("pause");
		system("cls");
	}
}

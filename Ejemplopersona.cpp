//Persona.h

#pragma once
class Persona
{
private:  //atributos
 int CI;
 int edad;

public:  //metodos
 Persona(int _edad, int _CI);
 ~Persona(void);
 void leer();
 void correr();
};



//Persona.cpp

#include "StdAfx.h"
#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(int _edad, int _CI)
{ //se inicializan los atributos
 edad=_edad;
 CI=_CI;
}


Persona::~Persona(void)
{
}

void Persona::leer()
{
 cout<<" soy "<<CI<<" estoy leyendo"<<endl;
}

void Persona::correr()
{
 cout<<" soy "<<CI<<" estoy corriendo"<<endl;
}



//Ejemplopersona.cpp


#include "stdafx.h"
#include "Persona.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
 Persona p1(19, 7707040); //crear una instancia
 p1.leer();
 p1.correr();


 getch();
}

// ejemplo1.cpp : Defines the entry point for the console application.
//

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
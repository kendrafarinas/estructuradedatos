// ej 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "math.h"

#include <iostream>

#include "conio.h"

using namespace std;

void EC2(float a,float b,float c);

void main()

	{float a,b,c;

	cout<<"Ingrese a: "<<endl;

	cin>>a;

	cout<<"Ingrese b: "<<endl;

	cin>>b;

	cout<<"Ingrese c: "<<endl;

	cin>>c;

	EC2(a,b,c);

	getch();

	}

void EC2(float a,float b,float c)

	{float x1,x2,d,x,PR,PC;

	d=b*b-4*a*c;

		if( a==0)

		{x=-c/b;cout<<"X:"<<x<<endl;}

		else

			{if(d>0)

			{x1=(-b+sqrt(d))/(2*a);

			x2=(-b-sqrt(d))/(2*a);

			cout<<"X1:"<<x1<<endl;

			cout<<"X2:"<<x2<<endl;

			}

			else //complejos

			{PR=-b/(2*a);

			PC=sqrt(-d)/(2*a);

			cout<<PR<<"+"<<PC<<"i"<<endl;

			cout<<PR<<"-"<<PC<<"i"<<endl;

			}

		}

	}


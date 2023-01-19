#include <iostream>
using namespace std;
int main()

{
	float val;
	double fin;
	char opcion;
	cout << "Elige la opcion de conversion: \n";
	cout << "1) Moneda 2) Distancia 3) Peso" << endl;

	cin >> opcion;
switch(opcion)
{
	case'1': cout<<"Introduzca la cantidad de pesos mexicanos:\n";
	cin >> val;
	cout << "Elige la conversion: \n";
	cout << "1) Peso argentino 2) Euro 3) Dolar estadounidense 4) Franco 5) Peso colombiano\n";
	cin >> opcion;
    	switch(opcion)	
        {
        case'1': fin=val*9.66;
        break;
    	case'2': fin=val*0.049;
    	break;
    	case'3': fin=val*0.053;
    	break;
    	case'4': fin=val*0.048;
    	break;
    	case'5': fin=val*248.66;
    	break;
    	default: cout << "Ingrese un numero correcto";
        }
        cout<<val <<" peso(s) mexicano(s) equivale a "<<fin ;
	break;
	
	case'2': cout<<"Introduzca la cantidad de kilometros:\n";
	cin >> val;
	cout << "Elige la conversion: \n";
	cout << "1) Pulgadas 2) Pies 3) Centimetros 4) Nanometros 5) Años luz\n";
	cin >> opcion;
	    switch(opcion)	
        {
        case'1': fin=val*39370.1;
        break;
    	case'2': fin=val*3280.84;
    	break;
    	case'3': fin=val*100000;
    	break;
    	case'4': fin=val*1e+12;
    	break;
    	case'5': fin=val*1.057e-13;
    	break;
    	default: cout << "Ingrese un numero correcto";
        }
        cout<<val <<" kilometro(s)equivale a "<<fin ;
	break;
	
	case'3': cout<<"Introduzca la cantidad de kilogramos:\n";
	cin >> val;
	cout << "Elige la conversion: \n";
	cout << "1) Toneladas 2) Onzas 3) Libras 4) Microgramos 5) Teragramos\n";
	cin >> opcion;
	switch(opcion)	
        {
        case'1': fin=val*0.001;
        break;
    	case'2': fin=val*35.274;
    	break;
    	case'3': fin=val*2.20462;
    	break;
    	case'4': fin=val*1e+9;
    	break;
    	case'5': fin=val*1e-9;
    	break;
    	default: cout << "Ingrese un numero correcto";
        }
        cout<<val <<" kilogramo(s) equivale a "<<fin ;
	break;
	
	default: cout << "Ingrese un numero correcto";
}

	return 0;	
}
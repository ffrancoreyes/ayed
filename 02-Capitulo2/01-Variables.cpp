#include <iostream>
#include <string> //para poder usar strings
using namespace std;

int main(){
    //declaración de variables que vamos a usar
    int edad;
    float altura;
    string nombre;
    // pedimos al usuario que ingrese sus datos
    cout << "Ingrese su nombre: ";
    getline(cin,nombre); // con el getline(cin,variable) capturamos lo que el usuario ingresó
    cout << "Ingrese su edad: "; cin >> edad;
    cout << "Ingrese su altura: "; cin >> altura;

    //mostramos lo que el usuario ingresó
    cout << "Hola " << nombre << ", tienes " << edad << " años y mides: " << altura <<  endl;

    return 0;
}


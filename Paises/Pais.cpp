#include "Pais.h"
#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;

void Pais::mostrar(){
    cout << _codigo << " " << _codigo2 << " " << _nombre << " " << _continente << " " << _superficie << " "<<endl;
    cout << _poblacion << " " << _independencia << " " << _expectativaDeVida << " " << _capital << endl;
}
void Pais::setCodigo(const char *codigo){
    strcpy(_codigo, codigo);
}
void Pais::setCodigo2(const char *codigo2){
    strcpy(_codigo2, codigo2);
}
void Pais::setNombre(const char *nombre){
    strcpy(_nombre, nombre);
}
void Pais::setContinente(const char *continente){
    strcpy(_continente, continente);
}
void Pais::setSuperficie(float superficie){
    _superficie = superficie;
}
void Pais::setPoblacion(int poblacion){
    _poblacion = poblacion;
}
void Pais::setIndependencia(short independencia){
    _independencia = independencia;
}
void Pais::setExpectativaDeVida(float expectativa){
    _expectativaDeVida = expectativa;
}
void Pais::setIDCapital(int IDCapital){
    _capital = IDCapital;
}
char * Pais::getCodigo(){
    return _codigo;
}
char * Pais::getCodigo2(){
    return _codigo2;
}
char * Pais::getNombre(){
    return _nombre;
}
char * Pais::getContinente(){
    return _continente;
}
float Pais::getSuperficie(){
    return _superficie;
}
int Pais::getPoblacion(){
    return _poblacion;
}
short Pais::getIndependencia(){
    return _independencia;
}
float Pais::getExpectativaDeVida(){
    return _expectativaDeVida;
}
int Pais::getIDCapital(){
    return _capital;
}

void Pais::cargar(){
char codigo[4],codigo2[3],nombre[35],continente[20];
float superficie,expectativaDeVida;
int poblacion,capital;
short independencia;

cout<<"Codigo de pais: ";
cin>>codigo;
cin.ignore();
setCodigo(codigo);
cout<<"Codigo 2: ";
cin>>codigo2;
cin.ignore();
setCodigo2(codigo2);
cout<<"Nombre: ";
cin>>nombre;
cin.ignore();
setNombre(nombre);
cout<<"Continente: ";
cin>>continente;
cin.ignore();
setContinente(continente);
cout<<"Superficie: ";
cin>>superficie;
setSuperficie(superficie);
cout<<"Expectativa de vida: ";
cin>>expectativaDeVida;
setExpectativaDeVida(expectativaDeVida);
cout<<"Poblacion: ";
cin>>poblacion;
setPoblacion(poblacion);
cout<<"Capital: ";
cin>>capital;
setIDCapital(capital);
cout<<"Independencia: ";
cin>>independencia;
setIndependencia(independencia);

}

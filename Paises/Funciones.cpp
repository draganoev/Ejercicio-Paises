#include <iostream>
#include <cstring>
#include <iomanip>
#include "Funciones.h"
#include "Pais.h"
using namespace std;

bool buscarRegistro(FILE* Paises, Pais &reg){
char codigo[4];

cout<<"Ingrese el codigo del pais que esta buscando: ";
cin>>codigo;

Paises = fopen("Paises.dat","rb");
if(Paises==NULL){
    cout<<"No se pudo abrir el archivo";
}
while(fread(&reg,sizeof(Paises),1,Paises)){
    if(strcmp(reg.getCodigo(),codigo)==0){
        fclose(Paises);
        return true;
    }
}
fclose(Paises);
return false;

}

void buscarRegistroCiudad(FILE* Ciudades, Ciudad &regCiudad){
char codigo[4];

cout<<"Ingrese el codigo del pais que buscando: ";
cin>>codigo;

Ciudades = fopen("Ciudades.dat","rb");
if(Ciudades == NULL){
    cout<<"No se pudo abrir el archivo";
}else{
    while(fread(&regCiudad,sizeof(Ciudad),1,Ciudades)){
       if(strcmp(regCiudad.getIDPais(),codigo)==0){
        cout<<regCiudad.getNombre()<<endl;
        cout<<regCiudad.getPoblacion()<<endl;
        }
    }
}
fclose(Ciudades);

}

void mostrarPaisConNombreySuperficie(FILE* Paises, Pais &reg){
int contadorDePaises=0;
float porcentajeActual;

Paises = fopen("Paises.dat","rb");

if(Paises == NULL){
    cout<<"No se pudo abrir el archivo";
}else{while(fread(&reg,sizeof(Pais),1,Paises)){
    contadorDePaises++;
}
fclose(Paises);
Paises = fopen("Paises.dat","rb");

if(Paises == NULL){
    cout<<"No se pudo abrir el archivo";
}else{
        while(fread(&reg,sizeof(Pais),1,Paises)){
        cout<<reg.getNombre()<<endl;
        cout<<fixed<<setprecision(0)<<reg.getSuperficie()<<" km2"<<endl;
        porcentajeActual = (reg.getSuperficie()*100)/510072000;
        cout<<"PSM: "<<fixed<<setprecision(5)<<porcentajeActual<<" %"<<endl;
    }
}

fclose(Paises);
}}

void menu(){
cout<<"1) BUSCAR REGISTRO DE PAIS A PARTIR DE SU CÓDIGO"<<endl;
cout<<"2) AGREGAR REGISTRO DE PAIS"<<endl;
cout<<"3) LISTAR ARCHIVO DE PAISES"<<endl;
cout<<"4) VER REGISTRO DE CIUDAD SEGUN ID"<<endl;
cout<<"5) MOSTRAR PAISES CON NOMBRE Y SUPERFICIE A NIVEL MUNDIAL"<<endl;
cout<<"0) SALIR"<<endl;

cout<<"OPCION: ";
}



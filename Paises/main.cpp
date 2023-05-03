#include <iostream>
using namespace std;
#include "Pais.h"
#include "Ciudad.h"
#include "Funciones.h"

int main()
{
int opcion;
char codigo;
FILE* Paises;
FILE* Ciudades;
Pais reg;
Ciudad regCiudad;

do{
menu();
cin>>opcion;

switch(opcion){
    case 1: if(buscarRegistro(Paises,reg)==true){
    cout<<"Existe ese registro"<<endl;
    system("PAUSE");
    system("cls");
    }else{
    cout<<"No existe tal registro"<<endl;
    system("PAUSE");
    system("cls");}
    break;
    case 2:Paises = fopen("Paises.dat","ab");
    if(Paises==NULL){
        cout<<"No se pudo abrir el archivo";
        return 1;
    }else{
        reg.cargar();
        fwrite(&reg,sizeof(Pais),1,Paises);
        cout<<"Registro exitoso"<<endl;
        fclose(Paises);
        system("PAUSE");
        system("cls");
    }
    break;
    case 3: Paises = fopen("Paises.dat","rb");
    if(Paises==NULL){
        cout<<"No se pudo abrir el archivo";
        return 1;
    }else{
        while(fread(&reg,sizeof(Pais),1,Paises)){
            reg.mostrar();
        }
        fclose(Paises);
        system("PAUSE");
        system("cls");
    }
    break;
    case 4: system("cls");
            buscarRegistroCiudad(Ciudades,regCiudad);
            system("PAUSE");
            system("cls");
    break;
    case 5:
        mostrarPaisConNombreySuperficie(Paises,reg);
        system("PAUSE");
        system("cls");
    break;
    }
}while(opcion!=0);


    return 0;

}

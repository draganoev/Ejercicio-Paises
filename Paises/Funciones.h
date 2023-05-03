#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "Pais.h"
#include "Ciudad.h"

bool buscarRegistro(FILE* Paises, Pais &reg);
void buscarRegistroCiudad(FILE* Ciudades, Ciudad &regCiudad);
void mostrarPaisConNombreySuperficie(FILE* Paises, Pais &reg);
void menu();

#endif // FUNCIONES_H_INCLUDED

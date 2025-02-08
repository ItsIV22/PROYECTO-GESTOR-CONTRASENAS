#include "libs.h"
#include "Modelo.cpp"

void visualizarMenu()
{
    vector<string> opciones = {"Opcion 1", "Opcion 2", "Opcion 3", "Opcion 4"};
    string titulo = "GESTOR DE CONTRASENAS";
    int seleccion = crearMenu("Menú Principal", opciones);
    switch (seleccion)
    {
    case 0:
        cout << "Has seleccionado la Opcion 1" << std::endl;
        // Aquí puedes agregar el código para la Opción 1
        break;
    case 1:
        cout << "Has seleccionado la Opcion 2" << std::endl;
        // Aquí puedes agregar el código para la Opción 2
        break;
    case 2:
        cout << "Has seleccionado la Opcion 3" << std::endl;
        // Aquí puedes agregar el código para la Opción 3
        break;
    default:
        cout << "Seleccion invalida" << std::endl;
        break;
    }
}
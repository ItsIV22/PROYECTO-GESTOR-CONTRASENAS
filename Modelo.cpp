#include "libs.h"

int crearMenu(const std::string& titulo, const std::vector<std::string>& opciones) {
    int seleccion = 0;
    const int ARRIBA = 72;
    const int ABAJO = 80;
    const int ENTER = 13;

    while (true) {
        system("cls"); // Limpiar pantalla

        std::cout << titulo << std::endl << std::endl; // Mostrar título del menú

        for (int i = 0; i < opciones.size(); ++i) {
            if (i == seleccion) {
                std::cout << "> " << opciones[i] << std::endl;
            } else {
                std::cout << "  " << opciones[i] << std::endl;
            }
        }

        int tecla = _getch();
        if (tecla == 224) { // Tecla especial (flechas)
            tecla = _getch();
        }

        if (tecla == ARRIBA) {
            seleccion = (seleccion - 1 + opciones.size()) % opciones.size();
        } else if (tecla == ABAJO) {
            seleccion = (seleccion + 1) % opciones.size();
        } else if (tecla == ENTER) {
            break;
        }
    }

    return seleccion;
}
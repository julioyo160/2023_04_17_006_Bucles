// 2023_04_17_006_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ
//------------------Practica 7--------------------------
//Hacer un programa que te solicite el numero de peleadores en una arena y te de el número de batallas que se tendrán para obtener a 1 ganador dependiendo del sistema de combate.
//1. - Royal Rumble
//2. - Eliminatoria directa
//3. - Grupos, semifinal y final
//
//


#include <iostream>
#include <locale.h>


int main()
{
    int peleadores;
    int opc = 0;
    int rr = 0;
    int ED = 0;
    int G = 0;
    int S = 0;
    int F = 0;

    std::cout << " HOLA BIENVENIDO, LLEGO LA HORA DE METER CHINGADAZOS\n " << std::endl;
    std::cout << " Con cuantos peleadores te quieres dar en la madre?\n " << std::endl;
    std::cin >> peleadores;
    std::cout << " Que tipo de batalla te interesa?\n \tTenemos tres opciones para reventar\n \t1)partida rapida: todos contra todos royal rumble\n \t2)battle royal: eliminatoria directa\n \t3)batalla por equipos: grupos, semifinal y final\n " << std::endl;
    std::cin >> opc;

    switch (opc) {
    case 1:

        for (int i = 1; i < peleadores; i++) {
            rr = (peleadores - i) + rr;
        }
        std::cout << "partida rapida todos contra todos\n" << std::endl;
        std::cout << "tendremos " << rr << " batallas en total te deseo mucha suerte la ocuparas chaval" << std::endl;
        break;
    case 2:

        ED = (peleadores - 1);

        std::cout << " battle royal\n " << std::endl;
        std::cout << " Que bien me pregunto cuantas peleas seran en total " << ED << " te deceo suerte la ocuparas chavalon" << std::endl;

        break;
    case 3:

        G = (peleadores / 4);
        for (int t = 1; t < G; t++) {
            rr = (G - t) + rr;

        }
        F = rr * 4;
        S = F + 3;

        std::cout << " batalla por equipos\n " << std::endl;
        std::cout << " battallas por equipo y cuantas battallas " << S << " en este caso que el mejor equipo gane " << std::endl;
        break;

    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

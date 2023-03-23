// ConsoleApplication.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "iostream"
#include "string"

using namespace std;

int main()
{
    cout << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrese su nombre:" << "\n";
    //Volvemos a mostrar el mismo mensaje, pues para mostrar datos no hay problemas

    string nombre;//Seguimos usando string para almacenar el nombre
    //cin >> nombre; //Esta línea da problemas si se lee un valor con espacios
    // En su lugar, usamos getline, con el flujo de entrada de cin y lo asignamos as nombre
    getline(cin, nombre); //Esta línea no dará problemas con los espacios en el nombre

    cout << "Bienvenido al sistema " << nombre << ". Gracias por usar nuestra aplicación" << "\n";


    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

#include <iostream>

using namespace std;

int main(){
    // Declaracion de variables y el resultado 
    string User1[8], User2[8];
    int Pass[3], Pass2[3];

    /*Solicitar al usuario que ingrese el usuario y contraseña*/
    cout << "*****************Bienvenido al programa******************* ";

    // Solicitar al usuario que ingrese los nombres de las personas a salir de paseo
    cout << "Ingrese al usuario 1: ";
    cin >>(User1,8);
    cout << "Ingrese la contraseña del usuario 1: ";
    cin >>(Pass,3);

    cout << "Ingrese al usuario 2: ";
    cin >>(User2,8);
    cout << "Ingrese la contraseña del usuario 1: ";
    cin >>(Pass2,3);

    

    return 0; // Fin del programa
}
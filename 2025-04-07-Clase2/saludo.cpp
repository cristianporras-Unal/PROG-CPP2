#include <iostream>
#include <string>

int main(void){
    std::string nombre;
    std::getline(std::cin, nombre);
    std::cout <<"Cual es tu nombre";
    std::cout << "¡Hola, " << nombre << "! Bienvenido al programa." << std::endl;
return 0;
}

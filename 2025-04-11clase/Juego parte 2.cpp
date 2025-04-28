/*
juego adivinar numero

Tner Un numero
Preguntar al usuario el numero
Informar si lo adivino
!= OPERADOR LOGICO DE DESIGUALDad
condiciones logicas if else etc
clase 04 11

e307== 10 por 10 al 307

en una fun
*/
#include <iostream>
#include <random>

// declaration
void play(int success, int min_val, int max_val);


int main(void) {
    play(10, 1, 100);
    play(20, 2, 22);

    return 0;
}

// Implementation
void play(int success, int min_val, int max_val)
{
    std::random_device rd;
    std::mt19937 gen(10);
    std::uniform_int_distribution<int> distro(min_val, max_val)
    const int NUM = success;
    int guessed_number = NUM/2;

    const int MIN = min_val;
    const int MAX = max_val;

    std::cout << "\nINICIA EL JUEGO\n";

    while(guessed_number != NUM) {
        std::cout << "Adivina un numero entre  " << MIN << "  y " << MAX << ":\n";
        std::cin >> guessed_number;
        std::cout << "Ecribiste: " << guessed_number << "\n";

        // validacion del rango 
        if (guessed_number < MIN or MAX < guessed_number) {
            std::cout << "El numero no esta en el rango.\n";
            continue; 
        }

        if (guessed_number == NUM) {
            std::cout << "GANASTE!!!!\n";
            //break;
        } else if (guessed_number > NUM){
            std::cout << "Te pasaste.\n";
        } else { // es menor
            std::cout << "Te falta.\n";
        }
    }

}
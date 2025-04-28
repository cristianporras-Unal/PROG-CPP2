/*
juego adivinar numero

Tner Un numero
Preguntar al usuario el numero
Informar si lo adivino
!= OPERADOR LOGICO DE DESIGUALDad
condiciones logicas if else etc
*/
#include <iostream>

  int main(void ){

     const int NUM = 10; // 
     int guessed_number = NUM/2;
  
    while(guessed_number != NUM){
       std::cout << "Adivina un Numero entre 1 y 100:\n";
       std::cin >> guessed_number;

        if (guessed_number == NUM){
       std::cout << "GANASTE!!!\n";
        //break;
       } else if (guessed_number > NUM){
        std:: cout << "Te pasaste.\n"; 
       } 
        else {std::cout << "Te falta.\n";
       }
    }

return 0;

 }
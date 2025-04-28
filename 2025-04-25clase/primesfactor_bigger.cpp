#include <iostream>
#include <cmath>
#include <string>
#include "prime_utils.h"


void largest_prime_factor (long double n);




int main(int argc, char **argv){

    // ./a.out -> argc = 1, argv = ["./a.out"]
    // ./a.out 10 -> argc = 2, argv = ["./a.out", "10"]
    // ./a.out 10 0.55 -> argc = 3, argv = ["./a.out", "10", "0.55"]
    // ./a.out 300 400 -> argc = 3, argv = ["./a.out", "300", "400"]

  long double num = std::stoi(argv[1]);

      largest_prime_factor(num);
   
    

   return 0;
    
   }
   
   
   
   
   
//programa que lea d ela linea d ecomando un numero y que me diga el factor primo mas grande e imprimirlo

void largest_prime_factor(long double n){
  if( n<=0){
    std::cout <<n<< " no tiene factor primo "<<"\n";
    return ;
  }
  
  
  
  
  
  long double flag = 0;
    for (long double i = n; i>=2;--i){  
        if (n%i==0 and isprime(i)== true){ 
        flag = i;
        break;
     }
    }
    if (flag != 0) {
        std::cout << "El mayor factor primo de " << n << " es " << flag << "\n";
    } else if (n == 1) {
        std::cout << "El número 1 no tiene factores primos propios.\n";
    }
    
    return ;
}
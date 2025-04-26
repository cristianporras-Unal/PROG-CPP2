#include <iostream>
#include <cmath>
#include "prime_utils.h"


long largest_prime_factor (long n);




int main(int argc, char **argv){

    // ./a.out -> argc = 1, argv = ["./a.out"]
    // ./a.out 10 -> argc = 2, argv = ["./a.out", "10"]
    // ./a.out 10 0.55 -> argc = 3, argv = ["./a.out", "10", "0.55"]
    // ./a.out 300 400 -> argc = 3, argv = ["./a.out", "300", "400"]

    int num = std::stoi(argv[1]);
    

   while (isprime(num)=true){
    
   }
   
   
   
   
    for(int ii = ; ii <= vmax-4; ++ii) {
        if (isprime(ii) == true and isprime(ii+4) == true) {
            std::cout << "(" << ii << ", " << ii+4 << ") ";
        }
    }
    std::cout << "\n";

    return 0;
}
//programa que lea d ela linea d ecomando un numero y que me diga el factor primo mas grande e imprimirlo

long largest_prime_factor(long n){



    
}
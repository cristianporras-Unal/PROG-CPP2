#include <iostream>
#include <cmath>

#include "prime_utils.h"

long largest_prime_factor (long n);




int main(){

    // ./a.out -> argc = 1, argv = ["./a.out"]
    // ./a.out 10 -> argc = 2, argv = ["./a.out", "10"]
    // ./a.out 10 0.55 -> argc = 3, argv = ["./a.out", "10", "0.55"]
    // ./a.out 300 400 -> argc = 3, argv = ["./a.out", "300", "400"]

    int num = 100;


    std::cout<<"El mayor factor primo de "<<num<< "es" <<largest_prime_factor(num)<<"\n";
   

   return 0;
    
   }
   
   
   
   
   
//programa que lea d ela linea d ecomando un numero y que me diga el factor primo mas grande e imprimirlo

long largest_prime_factor(long n){
    long flag = 0;
    for (long i = n; i>=2;--i){  
        if (n%i==0 and isprime(i)== true){ 
            flag = i;
            break;
        }
    }
    
    
    return flag;
}
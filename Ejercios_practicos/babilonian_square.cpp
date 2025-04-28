#include <iostream>
#include

float babilonian_square (float num, int iterations);



int  main(int argc, char **argv){
    
    int iterations = std::stoi(argv[1]);
    
    
    std::cout.setf(std::ios::scientific); // imprimir en notacipn cientifica
    std::cout.precision(15);  // imprimir con 15 cifras decimales
   
   
        std::cout << babilonian_square(2.0f, iterations) << "\n";
        std::cout << babilonian_square(2,iterations) << "\n";
        std::cout << babilonian_square(2,iterations) << "\n";
        std::cout << babilonian_square(2,iterations) << "\n";







    return 0;
}
 float babilonian_square (float num,int iterations){

    float x = 1;

    for(int i = 1;i <= iterations;++i){
        x = (0.5)*(x+(num/x));
        x = x;
    }



 return x;



}
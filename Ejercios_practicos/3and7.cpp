#include <iostream> 

// print number beetwen 5 and 223 and also divisible by 3 and 7


void printer (int min, int max);

int main(void){


 printer(5,223);
printer(5,223);



    return 0;
}


void printer (int min, int max) {
std::cout << "The number divibles by 3 and 7 beetwen " << min<< " and " << max<<"\n";


for(int i = min; i <= max ;i++){
  if(i%3 == 0 and i%7 == 0 ){
    std::cout <<i<<" ";
    std::cout << "\n";
  } 
  
  
  
}
return;
}
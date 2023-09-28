#include <iostream>

int main(){

  const int end = 100; // Max number to play

  for(int i = 1; i <= end; i++){

    if(i%3 == 0 && i%5 != 0) std::cout<<"fizz\n"; // Divides by 3 and NOT 5
    if(i%5 == 0 && i%3 != 0) std::cout<<"buzz\n"; // Divides by 5 and NOT 3
    if(i%5 != 0 && i%3 != 0) std::cout<<i<<"\n"; // Divides by neither
    if(i%15 == 0) std::cout<<"fizzbuzz\n"; // Divides by 15
  }

    /* The code above is FINE but it's a bit hard to understand: you have to look at all 4 lines
    together and work out exactly what they mean to see that only one thing will be printed.
    We can make it more understandable using an if, else idiom such as

    if(i%3 == 0 && i%5 != 0){
      std::cout<<"fizz\n"; // Divides by 3 and NOT 5
    }else if(i%5 == 0 && i%3 != 0){
      std::cout"buzz\n"; // Divides by 5 and NOT 3
    }else if(i%15 == 0){
      std::cout<<"fizzbuzz\n"; // Divides by 15
    }else{
      std::cout<<i<<"\n"; // Divides by neither
    }

    This layout makes it far clearer that only one line will execute. 

    */

}

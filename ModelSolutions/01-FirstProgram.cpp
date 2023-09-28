#include <iostream> // Supplies std::cout, std::endl, the << operator etc

// Always int main, here we omit command line arguments
int main(){

  // Declaring and defining some integers
  int guess = 0;
  int value = 10;

  // Ditto a logical flag
  // This is not the only way to code this program (obviously), but is the one I chose
  bool got_it = false;

  // Print message
  std::cout<< "Guess the number! (0 to 20)"<<std::endl;

  // Loop as long as cin gets a value value for guess (i.e. something compatible with an integer)
  while(std::cin>> guess){
    // Check value and inform
    if(guess == value){
      std::cout<< "You guessed it!\n";
      got_it = true;
      break; // Finished! so exit the loop early
    }else if(guess < value){
      std::cout<< "Too small!\n";
    }else{
      std::cout<< "Too big!\n";
    }

  }

  // Error trapping - if we get here with got_it == false then we must have
  // had a bad user input
  if(!got_it){
    // This is an error, so use the std err stream
    std::cerr<<"Sorry, I didn't understand what you entered... BYE!"<<std::endl;
  }else{
    std::cout<<"Thanks for playing!"<<std::endl;
  }

}

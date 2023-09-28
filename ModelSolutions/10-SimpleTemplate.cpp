#include <iostream>


// Boilerplate defining name of template type
template <typename T>
void log(T data, int severity=0){

  // 3 levels of message
  const std::string severity_mess[3]={"Info: ", "Warning: ", "Error: "};

  if(severity < 0) severity = 0; // Do something if param out of range
  if(severity > 2) severity = 2;

  // Assume any type we call this with has << operator
  // It is actually quite fiddly to demand this, but we'll
  // get a compile error if not. See commented out example
  std::cout<<severity_mess[severity]<<data<<std::endl;
}

// A class that does nothing and in particular has no
// << operator
class dummy{
};

int main(){

  log("Hello World");

  log("Something went wrong", 2);

  log(10.7);

  dummy d;
  // Uncomment the following line to see a template substitution failure
  // Trying to invoke 'log' will try and find an operator << for a "dummy"
  // and fail. Badly.
  // BEWARE - on my machine I get over 100 lines of error, including
  // 27 different "candidate" functions which were tried and failed. These
  // are all of the possible << operators which the ostream class implements
  // for types such as int, and float. Depending on what headers we include, if any
  // of them also implement an operator << for any type, that may also crop up as
  // a "candidate not viable" error.
  // TAKE_AWAY: Template errors can be horrible for even the simplest fault

//  log(d);

}

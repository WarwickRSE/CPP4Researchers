#include <iostream>


// By giving something a value (in the declaration but here we
// declare and define in one) you can set a default value
void log(std::string mess, int severity=0){ // Default severity of 0

  // 3 levels of message
  const std::string severity_mess[3]={"Info: ", "Warning: ", "Error: "};

  if(severity < 0) severity = 0; // Do something if param out of range
  if(severity > 2) severity = 2;

  std::cout<<severity_mess[severity]<<mess<<std::endl;
}

int main(){

  log("Hello World");

  log("Something went wrong", 2);

}

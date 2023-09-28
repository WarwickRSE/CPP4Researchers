#include <iostream>

void write(std::string mess){

  std::cout<<mess;
}

auto log(std::string mess, int severity=0){ // Default severity of 0

  // 3 levels of message
  const std::string severity_mess[3]={"Info: ", "Warning: ", "Error: "};

  if(severity < 0) severity = 0; // Do something if param out of range
  if(severity > 2) severity = 2;

  // Compose total message with newline at end
  std::string full_mess = severity_mess[severity]+mess+"\n";

  return write(full_mess);
}

int main(){

  log("Hello World");

  log("Nothing went wrong", 2);

}

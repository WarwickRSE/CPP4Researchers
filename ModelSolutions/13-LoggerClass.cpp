#include <iostream>

class Logger{

  private:
  // 3 levels of message
  const std::string severity_mess[3]={"Info: ", "Warning: ", "Error: "};

  int num_errors=0;
  int num_warns=0;

  std::string name="";

  public:

  // A quick syntax for intialising members using constructor
  // Comma-sep list of member names, then () containing the input variable to initialise with
  // We do still need the {} for the constructor body for it to exist
  Logger(std::string name_in):name(name_in){};

  template <typename T>
  void log(T data, int severity=0){

    if(severity < 0) severity = 0; // Do something if param out of range
    if(severity > 2) severity = 2;

    if(severity == 2) num_errors++;
    if(severity == 1) num_warns++;

    std::cout<<severity_mess[severity]<<data<<std::endl;
  }

  void display_message_stats(){
    std::cout<<"For "<<name<<" logger: \n";
    std::cout<<"There have been "<<num_errors<<" errors output\n";
    std::cout<<"There have been "<<num_warns<<" warnings output\n";
  }

};

int main(){

  Logger myLogger("Main"), mySpareLogger("Spare");

  myLogger.log("Hello World");

  myLogger.log("Something went wrong", 2);

  myLogger.log(10.7, 1);

  myLogger.log("File not found", 1);

  mySpareLogger.log("I am a teapot", 2);

  myLogger.display_message_stats();
  mySpareLogger.display_message_stats();

}

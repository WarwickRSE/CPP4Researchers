#include <iostream>
#include <string>
//Template for 1 parameter
template <typename T>
void print(T value){
  std::cout << "    Single parameter\n";
  std::cout << value << "\n";
}

//Template for two parameters of the same type
template <typename T>
void print(T value1, T value2){
  std::cout << "    Two matched parameters\n";
  std::cout << value1 << " " << value2 << "\n";
}
//Template for any number of parameters
//Extra is just a name. The special bit is the ...
//This is a bit tricky. This function takes one normal template parameter
//and a "variadic" template parameter that can be 0 or more actual template parameters
template <typename T, typename... extra>
//... again, here meaning "there will be 0 or more parameters with types matching the
//variadic template parameter
void print(T value, extra... extras){
	//Print that the variadic template version is operating
  std::cout << "    Variadic template\n";
  //Print the first value
  std::cout << value << "\n";
  //Call print again with all of the parameters that you haven't handled
  //When extras is down to a single parameter it will call the single
  //Template version of print because that is the least general version
  //That will work
  //The ... here expands the parameters into a parameter list
	print(extras...);
}

int main(){
  //Has to select single template - only one parameter
  print("Hello world!");
  std::cout << "\n"; // New line for formatting
  //Selects the two matched types template because it is the least generic
  print("Hello", "World");
  std::cout << "\n"; // New line for formatting
  //Selects the variadic version because there are three parameters
  //Try changing this line. For anything other than 1 parameter or two
  //parameters of the same type the variadic function will be called at least once
  print("Test value is",42,"this is a very special number");
}

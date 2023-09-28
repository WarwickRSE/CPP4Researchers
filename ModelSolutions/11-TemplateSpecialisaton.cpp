#include <iostream>


template <typename T>
void log(T data, int severity=0){

  // Demo message, showing what happens. Use stderr to
  // separate this from the main print below
  std::cerr<< "Called templated function"<<std::endl;

  // 3 levels of message
  const std::string severity_mess[3]={"Info: ", "Warning: ", "Error: "};

  if(severity < 0) severity = 0; // Do something if param out of range
  if(severity > 2) severity = 2;

  std::cout<<severity_mess[severity]<<data<<std::endl;
}

/* EXTRA: With templates we need the full function body to be available to the compiler, so we
don't have spearate function signaturesin a header.
Normally that is where we would define the default value for a parameter
NOT in the full definitions. Here I am doing it in the function above and must not do it in
the specialisations too - don't worry too much about this one, because if it works, it works, and
you can't have ambiguity (can't have a single parameter function overload, that would be
ambiguous, so if the single param. calls work, the default must be being used */

template <>// No need to name a type, as we are going to use an actual name instead
void log(std::string data, int severity){

  // Demo message, showing what happens. Use stderr to
  // separate this from the main print below
  std::cerr<< "Called string specialisation"<<std::endl;

  // 3 levels of message
  const std::string severity_mess[3]={"Info: ", "Warning: ", "Error: "};

  if(severity < 0) severity = 0; // Do something if param out of range
  if(severity > 2) severity = 2;

  // Append to string and call << only once...
  std::cout<<severity_mess[severity]+data+"\n";
}

template <>// No need to name a type, as we are going to use an actual name instead
void log(float data, int severity){

  // Demo message, showing what happens. Use stderr to
  // separate this from the main print below
  std::cerr<< "Called float specialisation"<<std::endl;

  // 3 levels of message
  const std::string severity_mess[3]={"Info: ", "Warning: ", "Error: "};

  if(severity < 0) severity = 0; // Do something if param out of range
  if(severity > 2) severity = 2;

  // Same as main body, just illustrating specialisation
  std::cout<<severity_mess[severity]<<data<<"\n";
}

int main(){

  // Definitely calling with a std::string here
  std::string str = "Hello World";
  log(str);

  // Argument here is NOT a std::string!
  log("Something went wrong", 2);

  // 10.7 is not a float, it's a double, use 10.7f to ensure type
  log(10.7);
  log(10.7f);

  float fl = 10.9; // Or use a type directly like this
  log(fl);

  /* Observe that specialisation is VERY pedantic, and will only match the exact type.
   For this and some other reasons its actually an uncommon thing to want to do. You can
   simply overload the function instead, and there are strict rules for precedence so this
   does not lead to ambiguity.
  */

}

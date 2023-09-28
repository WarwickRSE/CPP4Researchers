#include <string>
#include <vector>
#include <iostream>
#include <map>


// Define a class with a name
class Cipher{
    // By default things are private, only the stuff below the public: specifier is available outside

    // Internal data member - this gives it a default value for every instance of the class
    int shift=1;

    std::map<std::string, std::string> cipher_map;
    std::map<std::string, std::string> rev_cipher_map;

    std::vector<std::string> alphabet(){
      return {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    }

    // It's often useful to have shared initialisation code in a function like this, as it may
    // be called from more than one place. Making it private makes clear that users of the class
    // don't need to and should not be using it
    void init_cipher(){

      // Same code as Caesar cipher with a map
      auto alph = alphabet();

      for(int i = 0; i < alph.size(); i++){
        if(i+shift < alph.size()){
          cipher_map[alph[i]] = alph[i+shift];
        }else{
          cipher_map[alph[i]] = alph[i+shift - alph.size()];
        }
      }

      // Reverse the map. Easier not to build both at once as we handled wrapping around at the
      // end of alph in the obvious simple fashion
      // Here's a container based loop over the map
      // el will be a pair with key as the .first element and value as the .second
      for(auto el : cipher_map){
        rev_cipher_map[el.second] = el.first;
      }
    }

    // Shows how we pass a map, by reference, to a function
    // Again this is the same code as our basic cipher with map example but now
    // the map is passed in
    // Again this is an internal function, so we make it private
    std::string apply_map(std::string mess, std::map<std::string, std::string> & mapper){
      std::string mapped="";
      for(auto l : mess){
        std::string string_l = std::string{l};
        std::string ciph_l;
        if(mapper.count(string_l) > 0){
          ciph_l =mapper[string_l];
        }else{
          ciph_l = string_l;
        }
        mapped += ciph_l;
      }
      return mapped;
    }


  public:
    // The following are the functions we expect somebody to use

    // Default constructor (no arguments)
    Cipher(){init_cipher();}
    // Construct map for a selected value of shift
    Cipher(int shift_i){
      shift = shift_i; // Store value of shift passed in
      init_cipher(); // Do the initisation
    }

    // Encipher a message
    std::string encipher(std::string mess){
      return apply_map(mess, cipher_map);
    }

    // Deciphering is the same but uses the reverse map
    std::string decipher(std::string mess){
      return apply_map(mess, rev_cipher_map);
    }

};

int main(){

  // Create a ciphering instance
  Cipher myCipher(2);

  // Get message from user
  std::string mess;
  std::cout<<"Enter message to cipher, all UPPER CASE, then Enter: ";
  std::getline(std::cin, mess);

  // Run the cipher and reverse
  auto enciphered = myCipher.encipher(mess);
  auto deciphered = myCipher.decipher(enciphered);

  // Print message
  std::cout<<"Ciphered message reads: "<<enciphered<<std::endl;;

  // Error checking during development - check process reverses successfully
  if(deciphered != mess){
    std::cerr<<"WARNING: Error in ciphering. Deciphered message reads: "<<deciphered;
  }

}

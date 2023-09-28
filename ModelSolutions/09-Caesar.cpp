#include <string>
#include <vector>
#include <iostream>
#include <map>

// A helper function to just return the letters
// Extension: technically the {...} is an "initializer" from which a vector can be constructed
// If we used auto return type here we would NOT get a vector - we'd get a std:: initializer_list
// Storing that into a vector would work as expected, so we might not notice that we haven't
// done what we intended until something hits an edge case. Auto return type needs discipline
// in writing your functions!
std::vector<std::string> alphabet(){

 return {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
}

auto shifted_alph(int shift){

  // I am going to use a strategy that can't do -ve shifts, so protect from this
  // Also reject > 26 as silly
  if(shift > 26 || shift < 0){
    // This is showing C++ exceptions which we don't discus
    // 'throw' produces an exception which we can catch elsewhere
    throw std::invalid_argument("Shift value negative... or exceeds 26");
    // IF my code below never explicitly catches anything it will bubble up
    // and the code will "terminate with an uncaught exception" if this occurs
  }

  auto shifted = alphabet();
  std::rotate(shifted.begin(), shifted.begin()+shift, shifted.end());
  return shifted;
}

std::string cipher_vector(std::string mess){

  // The code below uses STL function to find letters, so we don't have to loop
  // over the entire alphabet ourselves. 

  const int shift = 2; // MUST BE +VE
  auto alph = alphabet();
  auto shifted = shifted_alph(shift);

  std::string ciphered="";
  //Container-style loop over each letter. NOTE l will be a COPY of each letter
  // Unfortunately, l's type is NOT string, it's a character reference
  // So we have to stringify explicitly
  // Take-away: STL is very powerful, but sometimes makes code as clear as mud
  for(auto l : mess){
    // Find the letter in the original alphabet
    // Final parameter is constructing a std::string from the character l
    auto indx = std::find(alph.begin(), alph.end(), std::string{l});
    std::string ciph_l="";
    // If letter was found...
    if(indx != alph.end()){
      // indx is an iterator to the location in alph. indx-alph.begin() is
      // (hyper-strictly: "is convertible to") the index of l in alph.
      // shifted.begin() is the first element, adding that index gets us the
      // equivalent shifted element
      ciph_l =*( indx - alph.begin() + shifted.begin());
    }else{
      // Punctutation etc gets left alone
      ciph_l = l;
    }
    // Append ciphered letter to result
    ciphered += ciph_l;
  }
  return ciphered;
}

std::string cipher_map(std::string mess){

  const int shift = 2; // Must be +VE
  auto alph = alphabet();

  // In "real" code, we would preserve a map for repeated use
  // Here I create it every time...
  std::map<std::string, std::string> cipher_map;
  for(int i = 0; i < alph.size(); i++){
    // Use the obvious way of doing shifted letters in the vector since we're
    // going letter by letter here
    if(i+shift < alph.size()){
      cipher_map[alph[i]] = alph[i+shift];
    }else{
      cipher_map[alph[i]] = alph[i+shift - alph.size()]; // Assumes shift < alph.size()
    }
  }

  std::string ciphered="";
  for(auto l : mess){
    std::string string_l = std::string{l}; // Beacuse iterating string gives a char, see above
    // Beware - if we look up l in the map and it's not there,  we'll end up adding it!
    //So to ignore punctuation, check first:
    std::string ciph_l;
    if(cipher_map.count(string_l) > 0){
      ciph_l =cipher_map[string_l];
    }else{
      ciph_l = string_l;
    }
    ciphered += ciph_l;
  }
  return ciphered;

  // Notice that the map code takes some setup, but is much clearer and quicker once this is done
  // If we kept the cipher_map around we could handle messages much more easily.
}


int main(){

  // Demonstrating the form of C++ exception handling
  // Hopefully you recognise that this is TERRIBLY done
  // We do nothing useful or helpful. But here's the outline
  try{

    std::string mess = "HELLO WORLD!";

    auto ciphered = cipher_vector(mess);
    std::cout<<ciphered<<std::endl;

    auto ciphered_m = cipher_map(mess);
    std::cout<<ciphered_m<<std::endl;

  }catch (const std::exception& e){
    // Demo of some cursory exception handling...
    std::cerr<<"Um, something went a bit wrong... Sorry!"<<std::endl;
  }

  // Note that both approaches here can handle any arbitrary mapping (in the vector example, we just set up the second
  // vector as a pertubation, not a shift) but map is perhaps more natural and will be faster for long messages. You could
  // try timing the two approaches if you like: ask for help doing timing instrumentation if needed

}

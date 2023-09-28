#include <utility>
#include <iostream>
#include <string>

int main(){
  //Int double pair
  std::pair<int,double> i_d_pair;
  i_d_pair.first=7;
  i_d_pair.second=14.9;
  //Can't just print it, there's no information on how
  //std::cout << i_d_pair << "\n";
  std::cout << i_d_pair.first << " : " << i_d_pair.second << "\n";

  std::pair<int,std::string> i_s_pair;
  i_s_pair.first = 123;
  i_s_pair.second = "Hello world!";

  std::cout << i_s_pair.first << " : " << i_s_pair.second << "\n";

}

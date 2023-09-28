#include <iostream>
#include <typeinfo>

const int len = 10; // A global size variable

// Element wise getter
int & get_element(int arr[], int element){

  if(element > 0 && element < len){
    return arr[element];
  }else{
    return arr[len-1]; // Have to do something! Return the last element
  }

}


int main(){

  int arr[len];
  for(int i = 0; i < len; i++) arr[i] = i;


  // Use auto variable type
  auto my_element = get_element(arr, 3);
  my_element *= 2; // Double it

  // See what happened
  // Name string is implementation defined - do not try and parse it programattically
  // Keep in mind that you should NOT need to know types but it can be handy when learning to see
  std::cout<<"Type of my_element "<<typeid(my_element).name()<<std::endl;

  // Type specifier does not contain things like const, reference etc
  // These are not part of the type, but are considered "extras"

  // Explicitly add the reference specifier...
  auto & my_2nd_element = get_element(arr, 5);
  my_2nd_element *= -1;

  // We can explicitly add a const specifier too, but obviously that is rarely useful with a reference
  const auto mult = 5;
  my_2nd_element *= mult;

  // An ugly hack - invoke a deliberate compiler error which will display
  // the type as part of the error... Replace my_element with the target variable
  // CODE WILL NOT COMPILE WITH THIS PRESENT!
  // But tricks like this can be useful, so lets show it!
//  decltype(my_element)::nothing = 1; // Attempt to do something with a nonexistent field


  // See if we affected arr directly or not
  for(int i = 0; i < len; i++) std::cout<<arr[i]<<" ";

  std::cout<<"\n";

}

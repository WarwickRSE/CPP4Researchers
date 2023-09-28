#include <iostream>

const int len = 10; // A global size variable

// A very silly function which just wraps the [] function
// but does show how to write something returning a reference...
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


  // Get the element as a _reference_
  int& my_element = get_element(arr, 3);
  my_element *= 2; // Double it

  // Get the element as a plain int i.e. a copy!
  int my_2nd_element = get_element(arr, 5);
  my_2nd_element *= 2; // Double it - what happens to the original array?
    // If you turn on all warnings in your compiler, you might get a hint in cases where you accidentally
    // missed the reference spec. Try this now

  get_element(arr, 1) *= -1; //Act on the reference directly

  for(int i = 0; i < len; i++) std::cout<<arr[i]<<" ";

  std::cout<<"\n";

}

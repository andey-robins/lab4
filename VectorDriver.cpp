//
//  Code by Andey Tuttle
//  Last Update October 8, 2018
//  Liscenced under MIT Liscence
//  This file tests the implementation of functions in VectorDriver.h which provide
//  ways to interact with a vector<short>
//

#include "VectorDriver.h"

int premadeTestCode();

int main() {
  //run this code to execute the provided unit test of the vector implementation
  //premadeTestCode();

  //test of the add_numbers function
  //fills addNumberTestV with random numbers
  cout << "Test of the add_numbers function." << endl;
  vector<short> addNumberTestV(10);
  cout << "new vector: ";
  print(addNumberTestV);
  cout << endl;
  add_numbers(addNumberTestV);
  cout << "random vector: ";
  print(addNumberTestV);            //print result
  cout << endl << endl << endl;

  //test of the print_even function
  //only will print elements in the array that have an even index
  cout << "Test of the print_even function." << endl;
  print_even(addNumberTestV);       //print result
  cout << endl << endl << endl;

  //test of the is_present function
  //checks to see if a value is present in a vector
  cout << "Test of is_present fucntion." << endl;
  cout << "10 is in vector addNumberTestV: " << is_present(addNumberTestV, 10) << endl;
  vector<short> hasTen(11);
  fill_vector(hasTen);
  cout << "10 is in vector hasTen: " << is_present(hasTen, 10) << endl << endl << endl;

  //test the sort_vector function
  //sorts the values of the vector from low to high
  cout << "Test of sort_vector function." << endl;
  cout << "Before sort: ";
  print(addNumberTestV);
  cout << endl;
  sort_vector(addNumberTestV);
  cout << "After sort: ";
  print(addNumberTestV);            //print result
  cout << endl;

}



//premade function provided at the beginning of the lab.
int premadeTestCode(){
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  system("pause");
  return 0;
}

/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

//fill the array with random short values
void add_numbers(vector<short> &data) {

  //seed the random function using the runtime of the program
  srand(time(0));

  for (ulong i=0; i<data.size(); i++) {
    //ensures that a value will not be generate that can't be stored by the data structure
    data.at(i) = rand()%SHRT_MAX;
  }
}

//print out every element in the vector that occurs at an even index
void print_even(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);  //NOTE: this line should be excluded if not counting 0 as an even number. I do however, so it stays here
    for (ulong i=2; i<data.size(); i += 2) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

//search through a vector to see if value is present
bool is_present(const vector<short> &data, short value) {

  std::vector<short>::const_iterator iter = data.begin();

  //iterate through all data to check if value is present
  while (iter != data.end()) {
    if (value == *iter){
      return true;
    }

    iter++;
  }

  return false;
}

//sorts the values in data in ascending order
void sort_vector(std::vector<short> &data) {

  std::sort(data.begin(), data.end());

  return;
}

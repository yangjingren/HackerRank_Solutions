#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  string inputString; // declare a variable to hold input
  getline(cin, inputString); // get a line of input from cin and save it to variable

  // first line of output
  cout << "Hello, World." << endl;

  // second line of output
  cout << inputString << endl;

  return 0;
}

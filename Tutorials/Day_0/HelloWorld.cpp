#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  string inputString; // Declare a variable to hold input.
  getline(cin, inputString); // Read a line of input into inputString.

  // First line of output.
  cout << "Hello, World." << endl;

  // Second line of output.
  cout << inputString << endl;

  return 0;
}

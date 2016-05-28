#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n; // Declare a variable to hold input.
  cin >> n; // Read an integer from input.

  // Conditional checks for weirdness.
  // If number is odd it is weird.
  if (n%2 != 0){
    cout << "Weird" << endl;
  }
  else {
    // Nested conditional check for even number constraints.
    if (n == 2 || n == 4){
      cout << "Not Weird" << endl;
    }
    else if (n >= 6 && n <= 20){
      cout << "Weird" << endl;
    }
    else if (n > 20){
      cout << "Not Weird" << endl;
    }
  }

  return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
  // Declare mealCost, tipPercent, taxPercent, and totalCost variables.
  double mealCost;
  int tipPercent;
  int taxPercent;
  double totalCost;

  // Read and save double and integers into variables.
  cin >> mealCost >> tipPercent >> taxPercent;

  // Calculate the totalCost from the received values.
  totalCost = mealCost + mealCost * (tipPercent + taxPercent) / 100;

  // Print the rounded value of the totalCost.
  cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;

  return 0;
}

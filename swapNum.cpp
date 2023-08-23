#include <iostream>

using namespace std;

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  // Swap the two numbers using a third variable
  int temp = a;
  a = b;
  b = temp;

  // Print the swapped numbers
  cout << "The swapped numbers are: " << a << " and " << b << endl;

  return 0;
}
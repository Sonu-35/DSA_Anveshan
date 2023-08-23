#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
  // Get the binary number from the user.
  string binaryNumber;
  cout << "Enter a binary number: ";
  cin >> binaryNumber;

  // Convert the binary number to a decimal number.
  int decimalNumber = 0;
  for (int i = 0; i < binaryNumber.length(); i++) {
    // Get the digit at the current position.
    int digit = binaryNumber[i] - '0';

    // Add the digit to the decimal number, multiplied by the appropriate power of 2.
    decimalNumber += digit * pow(2, binaryNumber.length() - i - 1);
  }

  // Print the decimal number.
  cout << "The decimal number is: " << decimalNumber << endl;

  return 0;
}
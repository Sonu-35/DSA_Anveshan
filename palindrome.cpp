#include <iostream>
#include <string>

using namespace std;

int main() {
  // Get the number from the user.
  int number;
  cout << "Enter a number: ";
  cin >> number;

  // Convert the number to a string.
  string numberString = to_string(number);

  // Check if the number is a palindrome.
  bool isPalindrome = true;
  for (int i = 0; i < numberString.length() / 2; i++) {
    if (numberString[i] != numberString[numberString.length() - i - 1]) {
      isPalindrome = false;
      break;
    }
  }

  //print the result
  if (isPalindrome) {
    cout << "The number is a palindrome." << endl;
  } else {
    cout << "The number is not a palindrome." << endl;
  }

  return 0;
}
//function to reverse the interger
#include<iostream>
using namespace std;

int reverse(int n){
    int r = 0, remainder;

    while(n != 0){
        remainder = n % 10;
        r = r * 10  + remainder;
        n /= 10;
    }

    return r;
}

int main(){
    int n;
    cout << "Enter the value of n: \n";
    cin >> n;

    reverse(n);

    cout << "Reverse of the integer is: " << reverse(n) << endl;

    return 0;
}
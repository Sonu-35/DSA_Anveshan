//mini calcualtor program
#include<iostream>
using namespace std;

int main(){
    int a , b;
    
    cout<<"Enter the value of a: " <<endl;
    cin >> a;

    cout << "Enter the value of b: " <<endl;
    cin >> b;

    char op;
    cout << "Enter the operation that you want to perform: " << endl;
    cin >> op;

    switch( op ){

        case '+' : cout << a + b;
            break;

        case '-' : cout << a - b;
         break;

        case '*' : cout << a * b;
         break;

        case '/' : cout << a / b;
         break;

         default : cout << "Not a valid operation: " << endl;
    }


    return 0;
}
//finding the min and max value of an array
#include<bits/stdc++.h>
using namespace std;

int getMin(int num[], int n){

    int min = INT_MAX;

    for(int i = 0; i < n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int n){

    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int main(){
    int size;
    cout <<"Enter the size of the array \n";
    cin >> size;

    int num[100];

    //taking input in array
    for (int i = 0; i < size; i++){
        cin >> num[i];
    }


    cout << "Maximum value in the array: " << getMax(num, size) << endl;

    cout <<"Minimum value in the array: " << getMin(num, size) << endl;

    return 0;
}

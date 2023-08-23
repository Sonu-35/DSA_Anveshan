#include <iostream>
#include <vector>

using namespace std;

int main() {
  
  vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<vector<int>> matrix2 = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

  
  vector<vector<int>> product(matrix1.size(), vector<int>(matrix2[0].size(), 0));

  
  for (int i = 0; i < matrix1.size(); i++) {
    for (int j = 0; j < matrix2[0].size(); j++) {
      for (int k = 0; k < matrix2.size(); k++) {
        product[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  
  for (int i = 0; i < product.size(); i++) {
    for (int j = 0; j < product[0].size(); j++) {
      cout << product[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
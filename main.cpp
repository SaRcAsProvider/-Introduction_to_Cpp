#include <iostream>

int main() {
  int n = 0, m = 0;
  std::cin >> n >> m;
  int data[100][100], max = INT32_MIN, index1 = 0, index2 = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> data[i][j];
      if (data[i][j] > max) {
        max = data[i][j];
        index1 = i;
        index2 = j;
      }
    }
  }
  std::cout << index1 << " " << index2;
  return 0;
}

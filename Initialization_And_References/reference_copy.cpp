#include <iostream>
#include <math.h>
#include <utility>
#include <vector>

using namespace std;

void shift(vector<pair<int, int>> &nums) {
  for (auto &[num1, num2] : nums) {
    num1++;
    num2++;
  }
}

int main() {
  vector<pair<int, int>> nums = {{1, 2}, {3, 4}, {5, 6}};

  cout << "Before shifting" << endl;

  for (const auto &[num1, num2] : nums) {
    cout << "(" << num1 << ", " << num2 << ")";
  }
  cout << endl;

  shift(nums);

  cout << "After shifting" << endl;

  for (const auto &[num1, num2] : nums) {
    cout << "(" << num1 << ", " << num2 << ")";
  }
  cout << endl;
}

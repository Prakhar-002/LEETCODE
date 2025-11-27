//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 43

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      string multiply(string num1, string num2) {
            int n1 = num1.size();
            int n2 = num2.size();
            vector<int> result(n1 + n2, 0);

            // Multiply each digit of num1 by each digit of num2
            for (int i = n1 - 1; i >= 0; i--) {
                  int digit1 = num1[i] - '0';
                  for (int j = n2 - 1; j >= 0; j--) {
                        int digit2 = num2[j] - '0';

                        int sum = digit1 * digit2 + result[i + j + 1];
                        result[i + j + 1] = sum % 10;
                        result[i + j] += sum / 10;
                  }
            }

            // Convert result vector to string, skip leading zeros
            string product;
            int index = 0;
            while (index < result.size() - 1 && result[index] == 0) {
                  index++;
            }
            for (; index < result.size(); index++) {
                  product.push_back(result[index] + '0');
            }

            return product;
      }
};

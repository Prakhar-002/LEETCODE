//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2197

//? ⌚ Time complexity ➺ O(n log m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> replaceNonCoprimes(vector<int> &nums) {
            vector<int> stack; // Stack to store processed numbers

            for (int num : nums) { // Iterate through each number in the array
                  while (!stack.empty()) {                             // While stack is not empty
                        int top = stack.back(); // Get the top element from stack
                        int g = gcd(top, num);  // Compute GCD of top and current number
                        if (g == 1) { // If coprime, no merge needed; stop merging
                              break;
                        }

                        stack.pop_back();                            // Remove the top
                        long long merged = (long long)top / g * num; // Compute LCM safely to avoid overflow
                        num = (int)merged;                           // Convert to int for further processing
                  }

                  stack.push_back(num); // Add current (merged or original) number to stack
            }
            return stack; // Return the processed stack as final result
      }

private:
      // Recursive Euclidean algorithm to compute GCD
      int gcd(int a, int b) {
            return b == 0 ? a : gcd(b, a % b);
      }
};

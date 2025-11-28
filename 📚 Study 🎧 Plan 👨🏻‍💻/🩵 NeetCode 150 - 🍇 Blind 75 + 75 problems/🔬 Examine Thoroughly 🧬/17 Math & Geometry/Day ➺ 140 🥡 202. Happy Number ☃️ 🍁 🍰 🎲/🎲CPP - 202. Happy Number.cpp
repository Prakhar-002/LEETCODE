//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 202

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_set>
using namespace std;

class Solution {
public:
      bool isHappy(int n) {
            // Lambda function to calculate sum of squares of digits
            auto sumOfSqr = [](int num) -> int {
                  int total = 0;
                  while (num > 0) {
                        int digit = num % 10;
                        total += digit * digit;  // Square each digit
                        num /= 10;               // Remove last digit
                  }
                  return total;
            };
            
            unordered_set<int> visit;  // Track visited numbers to detect cycles

            // Process until we hit 1 or detect cycle
            while (n != 1 && visit.find(n) == visit.end()) {
                  visit.insert(n);         // Mark current number as visited
                  n = sumOfSqr(n);         // Replace with sum of squares of digits
            }

            // Happy number if we reached 1
            return n == 1;
      }
};

//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1526

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(target)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int minNumberOperations(vector<int>& target) {
            int opr = target[0];  // Operations to raise first element from zero

            for (int i = 1; i < (int)target.size(); i++) {
                  // Add difference if current element is greater than previous
                  opr += max(target[i] - target[i - 1], 0);
            }

            return opr;  // Total minimum operations required
      }
};

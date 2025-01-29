//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 169

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int majorityElement(vector<int>& num) {
            // Initialize `major` as the first element, with a count of 1
            int major = num[0];
            int count = 1;

            // Iterate through the array starting from the second element
            for (int i = 1; i < num.size(); i++) {
                  if (count == 0) {
                        // If count is 0, reset `major` to the current element
                        major = num[i];
                        count++;
                  } else if (major == num[i]) {
                        // Increment count if the current element matches `major`
                        count++;
                  } else {
                        // Decrement count if the current element does not match `major`
                        count--;
                  }
            }

            // Return the majority element (guaranteed by problem constraints)
            return major;
      }
};

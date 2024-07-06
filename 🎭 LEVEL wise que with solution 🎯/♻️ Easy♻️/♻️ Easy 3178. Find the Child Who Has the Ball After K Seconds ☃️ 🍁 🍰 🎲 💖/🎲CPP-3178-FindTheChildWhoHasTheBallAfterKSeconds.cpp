//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 3178

//? ⌚ Time complexity -> O(1) 

//? 🧺 Space complexity -> O(1) 

class Solution {
public:
      int numberOfChild(int n, int k) {
            // 1 2 3 4 | 5 4 3 2 | 1 2 3 4 | 5 4 3 2 | 1 2 3 4 | ...
            // group will be made of n - 1 length
            int chunks = k / (n - 1);
            // The odd one chunk starts with number 1
            // while the even chunk starts with number n.
            return chunks % 2 == 0 ? (k % (n - 1)) : (n - 1 - k % (n - 1));
      }
};
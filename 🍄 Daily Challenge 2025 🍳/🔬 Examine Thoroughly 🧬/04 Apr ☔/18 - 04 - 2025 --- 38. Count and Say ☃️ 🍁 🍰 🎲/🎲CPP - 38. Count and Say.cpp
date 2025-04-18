//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 38

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 

//? 🧺 Space complexity ➺ O(2 ^ n)

class Solution {
public:
      // Helper function to generate next sequence from current
      string cntStr(string str) {
            string nextStr = ""; // Result string for the next term
            int left = 0, right = 0;

            // Traverse the string
            while (right < str.size()) {
                  // Move right pointer while same digits are found
                  while (right < str.size() && str[left] == str[right]) {
                        right++;
                  }

                  // Append count of repeated digits
                  nextStr += to_string(right - left);
                  // Append the digit itself
                  nextStr += str[left];

                  // Move to next group
                  left = right;
            }

            return nextStr; // Return next sequence
      }

      // Main method to return the nth count-and-say string
      string countAndSay(int n) {
            string str = "1"; // First term of the sequence

            // Build sequence up to n
            while (--n > 0) {
                  str = cntStr(str); // Update str using helper
            }

            return str; // Return final result
      }
};

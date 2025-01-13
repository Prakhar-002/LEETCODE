//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3223

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
      int minimumLength(const string& s) {
            // Create a vector to count occurrences of each letter in the string
            vector<int> charFreq(26, 0);

            // Iterate over each character in the string
            for (char ch : s) {
                  // Increment the count for the corresponding character
                  charFreq[ch - 'a']++;
            }

            // Initialize the result variable to store the minimum length
            int minLength = 0;

            // Iterate through the frequency counts
            for (int freq : charFreq) {
                  if (freq > 0) { // If the character appears in the string
                        // Add 1 if frequency is odd, otherwise add 2
                        minLength += (freq % 2 == 1) ? 1 : 2;
                  }
            }

            // Return the calculated minimum length
            return minLength;
      }
};

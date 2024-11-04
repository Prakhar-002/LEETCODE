//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3163

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
      string compressedString(const string& word) {
            int n = word.length();
            int start = 0;      // Starting index of the current sequence
            stringstream comp;  // Use stringstream for efficient concatenation

            for (int i = 1; i <= n; i++) {
                  // Check if we've reached the end, found a different character, or max sequence length of 9
                  if (i == n || word[i] != word[start] || (i - start) == 9) {
                        comp << (i - start);  // Append length of the current sequence
                        comp << word[start];  // Append the character itself
                        start = i;            // Update start for the next sequence
                  }
            }

            return comp.str();  // Convert stringstream to string
      }
};

//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1684

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(words) m = len(allowed)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      int countConsistentStrings(string allowed, vector<string>& words) {
            // Converts the string into a set to reduces the time complexity
            unordered_set<char> allowed_set(allowed.begin(), allowed.end());

            // This counter represents the number of consistent strings,
            // which initially is assumed to be equal to the total number of words
            int consistentString = words.size();

            // loop iterates over each word in the `words`
            for (const auto& word : words) {
                  // `for` loop iterates over each character (`ch`) of the current word
                  for (char ch : word) {
                        // If an inconsistent word is found (when a character is not in `allowed_set`)
                        if (allowed_set.find(ch) == allowed_set.end()) {
                              // counter `consistentString` is decremented by 1
                              consistentString--;
                              // decremented only once per inconsistent word so break it here
                              break;
                        }
                  }
            }

            return consistentString;
      }
};


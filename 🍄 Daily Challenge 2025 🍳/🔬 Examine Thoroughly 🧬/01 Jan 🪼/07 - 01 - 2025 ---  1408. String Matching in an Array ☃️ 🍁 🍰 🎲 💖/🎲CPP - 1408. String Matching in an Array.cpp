//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1408

//? ⌚ Time complexity ➺ O(n^2 * m) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)      👉🏻  m = avg(len(word))

#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
      vector<string> stringMatching(vector<string>& words) {
            // Initialize a set to store substrings that match the criteria
            unordered_set<string> matchingWords;

            // Iterate through each word in the list
            for (const auto& word : words) {
                  // Compare the current word with every other word in the list
                  for (const auto& potentialString : words) {
                        // Check if the potential substring is part of the current word
                        // and ensure it's not the same as the current word
                        if (word.find(potentialString) != string::npos && word != potentialString) {
                              matchingWords.insert(potentialString);
                        }
                  }
            }

            // Convert the set to a vector before returning
            return vector<string>(matchingWords.begin(), matchingWords.end());
      }
};

//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1079

//? ⌚ Time complexity ➺ O(n ^ n) 👉🏻  n = Unique char in s

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
      int numTilePossibilities(string tiles) {
            unordered_map<char, int> charCount;
            
            // Count occurrences of each character in the string
            for (char ch : tiles) {
                  charCount[ch]++;
            }

            return backtrack(charCount);
      }

private:
      int backtrack(unordered_map<char, int>& charCount) {
            int letters = 0; // Tracks the number of unique sequences

            // Iterate through all characters in the map
            for (auto& entry : charCount) {
                  if (entry.second > 0) { // If there are tiles left of this type
                        entry.second--; // Use one tile
                        letters += 1; // Count the current sequence
                        letters += backtrack(charCount); // Recursively explore further
                        entry.second++; // Backtrack (restore tile count)
                  }
            }
            return letters; // Return total sequences found
      }
};

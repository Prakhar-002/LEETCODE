//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 916

//? ⌚ Time complexity ➺ O(m * p + n * q) 

//*   👉🏻  n = len(word1) p = avg(len(word in word1))
//*   👉🏻  m = len(word2) q = avg(len(word in word2))

//? 🧺 Space complexity ➺ O(1)   

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
      // Method to count the frequency of each letter in a word.
      // Returns a vector of size 26, where each index corresponds
      // to the count of letters 'a' to 'z'.
      vector<int> wordsLetterCount(const string& word) {
            vector<int> letters(26, 0); // Initialize vector with zeros.
            for (char letter : word) {
                  // Increment the count for the corresponding letter.
                  letters[letter - 'a']++;
            }
            return letters;
      }

      // Method to find all universal words in word1 that satisfy the conditions
      // of being a superset for each word in word2.
      vector<string> wordSubsets(vector<string>& word1, vector<string>& word2) {
            vector<int> word2MaxCnt(26, 0); // Maximum letter frequencies for word2.

            // Update maximum frequency counts for each letter in word2.
            for (const string& word : word2) {
                  vector<int> count = wordsLetterCount(word);
                  for (int i = 0; i < 26; i++) {
                        word2MaxCnt[i] = max(word2MaxCnt[i], count[i]);
                  }
            }

            vector<string> universal; // List to store universal words.

            // Check each word in word1 against the conditions.
            for (const string& word : word1) {
                  vector<int> count = wordsLetterCount(word);
                  bool isUniversal = true;

                  // Ensure the word meets all frequency requirements.
                  for (int i = 0; i < 26; i++) {
                        if (count[i] < word2MaxCnt[i]) {
                              isUniversal = false;
                              break;
                        }
                  }

                  if (isUniversal) {
                        universal.push_back(word);
                  }
            }

            return universal;
      }
};

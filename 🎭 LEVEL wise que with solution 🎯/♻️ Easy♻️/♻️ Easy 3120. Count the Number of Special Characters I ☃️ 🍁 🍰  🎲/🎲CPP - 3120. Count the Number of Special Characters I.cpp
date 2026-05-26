//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3120

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
      int numberOfSpecialChars(string word) {
            // Build a set of all unique characters in the word
            unordered_set<char> wordSet(word.begin(), word.end());

            int ans = 0;

            for (char ch : word) {
                  if (islower(ch)) {
                        // Check if its uppercase pair also exists
                        if (wordSet.count(toupper(ch))) {
                              ans++;
                              // Remove both to avoid counting same pair twice
                              wordSet.erase(ch);
                              wordSet.erase(toupper(ch));
                        }
                  } else if (isupper(ch)) {
                        // Check if its lowercase pair also exists
                        if (wordSet.count(tolower(ch))) {
                              ans++;
                              // Remove both to avoid counting same pair twice
                              wordSet.erase(ch);
                              wordSet.erase(tolower(ch));
                        }
                  }
            }

            return ans;
      }
};
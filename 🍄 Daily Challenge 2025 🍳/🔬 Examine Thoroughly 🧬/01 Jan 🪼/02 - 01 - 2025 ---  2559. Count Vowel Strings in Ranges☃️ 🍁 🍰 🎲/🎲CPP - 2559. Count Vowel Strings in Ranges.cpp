//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2559

//? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)    👉🏻  q = len(queries) 

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
            // Define the vowels for quick lookup
            string vowels = "aeiou";

            // Initialize a prefix sum array to store cumulative counts of vowel strings
            vector<int> vowels_words(words.size() + 1, 0);

            // Build the prefix sum array
            for (int i = 0; i < words.size(); i++) {
                  // Check if the current word starts and ends with a vowel
                  if (vowels.find(words[i][0]) != string::npos && vowels.find(words[i].back()) != string::npos) {
                        // Increment the count at the current index
                        vowels_words[i + 1] = vowels_words[i] + 1;
                  } else {
                        // Carry forward the previous count
                        vowels_words[i + 1] = vowels_words[i];
                  }
            }

            // Initialize the result array to store query results
            vector<int> ans(queries.size());

            // Process each query
            for (int i = 0; i < queries.size(); i++) {
                  int st = queries[i][0];
                  int end = queries[i][1];

                  // Calculate the count of vowel strings in the range [st, end]
                  ans[i] = vowels_words[end + 1] - vowels_words[st];
            }

            // Return the results for all queries
            return ans;
      }
};

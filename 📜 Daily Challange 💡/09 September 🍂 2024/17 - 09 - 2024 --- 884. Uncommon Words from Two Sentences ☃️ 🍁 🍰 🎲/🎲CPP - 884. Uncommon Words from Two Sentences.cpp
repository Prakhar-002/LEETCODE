//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 884

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Total No. of Words in s1 + s2

//? 🧺 Space complexity ➺ O(n)

#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
      vector<string> uncommonFromSentences(string s1, string s2) {
            // Use unordered_map to store word counts
            unordered_map<string, int> count;

            // Split and count words from both sentences
            istringstream iss(s1 + " " + s2);
            string word;
            while (iss >> word) {
                  // increments the count of each word in the `count` map
                  count[word]++;
            }

            // Filter words that occur only once
            vector<string> uncommonWords;

            // iterate over map 
            for (const auto& entry : count) {
                  // if word count is 1
                  if (entry.second == 1) {
                        // add it in our vector
                        uncommonWords.push_back(entry.first);
                  }
            }

            // Return the vector of uncommon words
            return uncommonWords;
      }
};


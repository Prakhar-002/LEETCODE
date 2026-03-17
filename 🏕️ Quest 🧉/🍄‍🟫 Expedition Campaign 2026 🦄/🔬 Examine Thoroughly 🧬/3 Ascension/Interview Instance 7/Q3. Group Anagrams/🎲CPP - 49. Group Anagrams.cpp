//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 49

//? ⌚ Time complexity ➺ O(m * n log n) 👉🏻  m = len(strs)

//? 🧺 Space complexity ➺ O(m * n)  👉🏻   n = Max(len(s in strs))

//* Sorting 

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
      vector<vector<string>> groupAnagrams(vector<string>& strs) {
            // Create an unordered_map to group anagrams together
            unordered_map<string, vector<string>> res;

            // Iterate through each string in the input vector
            for (const string& s : strs) {
                  // Sort the string alphabetically to create a common key for anagrams
                  string sortedS = s;
                  sort(sortedS.begin(), sortedS.end());

                  // Append the original string to the corresponding group in the map
                  res[sortedS].push_back(s);
            }

            // Collect and return the grouped anagrams as a vector of vectors
            vector<vector<string>> result;
            for (const auto& group : res) {
                  result.push_back(group.second);
            }
            return result;
      }
};

//!-------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(strs)

//? 🧺 Space complexity ➺ O(m * n)  👉🏻   n = Max(len(s in strs))

//* Hash Table 

#include <vector>
#include <string>
#include <unordered_map>
#include <array>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<vector<string>> groupAnagrams(vector<string>& strs) {
            // Create a hash map to group anagrams together
            // The key is a string representation of the character frequency array
            // The value is a vector of strings (anagrams)
            unordered_map<string, vector<string>> res;

            // Iterate through each string in the input vector
            for (const string& s : strs) {
                  // Initialize a character frequency array for 'a' to 'z'
                  array<int, 26> count = {0};

                  // Count the frequency of each character in the string
                  for (char c : s) {
                        count[c - 'a']++;
                  }

                  // Convert the character frequency array into a unique key
                  string key;
                  for (int freq : count) {
                        key += to_string(freq) + "#";
                  }

                  // Add the current string to the corresponding group of anagrams
                  res[key].push_back(s);
            }

            // Prepare the result as a vector of vectors
            vector<vector<string>> result;
            for (auto& pair : res) {
                  result.push_back(pair.second);
            }

            return result;
      }
};

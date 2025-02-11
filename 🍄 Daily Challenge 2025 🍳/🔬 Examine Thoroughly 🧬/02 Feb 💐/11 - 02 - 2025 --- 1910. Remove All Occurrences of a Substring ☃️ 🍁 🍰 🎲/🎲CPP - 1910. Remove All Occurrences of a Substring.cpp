//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1910

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n + m) 👉🏻  m = len(part)

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
      string removeOccurrences(string s, string part) {
            // Get the length of the substring to be removed
            int partLen = part.length();

            // Use a string as a str
            string str = "";

            // Iterate through each character in the string
            for (char ch : s) {
                  str.push_back(ch);  // Push character to str

                  // Check if the last 'partLen' characters form the substring 'part'
                  if (str.size() >= partLen && checkMatch(str, part, partLen)) {
                        // Remove 'partLen' characters if a match is found
                        str.erase(str.end() - partLen, str.end());
                  }
            }

            // Return the final string after all removals
            return str;
      }

private:
      bool checkMatch(string &str, string &part, int partLen) {
            // Check if the last 'partLen' characters match 'part'
            return str.substr(str.size() - partLen) == part;
      }
};

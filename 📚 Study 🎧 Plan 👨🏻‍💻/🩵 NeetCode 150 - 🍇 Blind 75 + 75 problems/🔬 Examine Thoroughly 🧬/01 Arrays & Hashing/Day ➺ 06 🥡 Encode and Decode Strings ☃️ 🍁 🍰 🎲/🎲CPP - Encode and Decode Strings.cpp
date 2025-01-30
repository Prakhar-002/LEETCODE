//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 271

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strs)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
      string encode(vector<string>& strs) {
            // Initialize an empty string to store the encoded result
            string res = "";
            // Loop through each string in the list
            for (const string& s : strs) {
                  // Append the length of the string, a delimiter '#', and the string itself
                  res += to_string(s.size()) + "#" + s;
            }
            // Return the fully encoded string
            return res;
      }

      vector<string> decode(string s) {
            // Initialize a vector to store the decoded strings
            vector<string> res;
            // Pointer to traverse the encoded string
            int i = 0;

            while (i < s.size()) {
                  // Find the position of the next delimiter '#'
                  int j = i;
                  while (s[j] != '#') {
                        j++;
                  }
                  // Extract the length of the next string
                  int length = stoi(s.substr(i, j - i));

                  // Move the pointer past the delimiter
                  i = j + 1;

                  // Extract the actual string using the length
                  string str = s.substr(i, length);
                  res.push_back(str);

                  // Move the pointer to the next encoded part
                  i = i + length;
            }
            // Return the decoded list of strings
            return res;
      }
};

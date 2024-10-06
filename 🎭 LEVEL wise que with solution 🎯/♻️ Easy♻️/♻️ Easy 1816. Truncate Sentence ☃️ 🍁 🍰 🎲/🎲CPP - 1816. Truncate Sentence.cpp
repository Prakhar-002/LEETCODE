//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1816

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
      string truncateSentence(string s, int k) {
            // Create a string stream from the input string
            istringstream iss(s);
            string word, result;

            // Extract words from the stream and add them to the result
            while (k-- > 0 && iss >> word) {
                  // Add a space before each word except the first one
                  if (!result.empty()) result += " ";
                  result += word;
            }

            // Return a string formed by joining the first k words from the string s,
            // where the words are separated by a single space " "
            return result;
      }
};
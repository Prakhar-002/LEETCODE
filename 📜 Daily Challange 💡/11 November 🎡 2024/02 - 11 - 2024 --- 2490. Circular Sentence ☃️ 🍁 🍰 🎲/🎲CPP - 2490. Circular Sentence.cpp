//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2490

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strArr)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
      bool isCircularSentence(string sentence) {
            // Splitting the sentence into words
            vector<string> strArr;
            istringstream iss(sentence);
            string word;

            while (iss >> word) {
                  strArr.push_back(word);
            }

            int n = strArr.size();

            // Iterate through the words
            for (int i = 0; i < n; ++i) {
                  // Check if the last character of the current word matches the first character of the next word
                  if (strArr[i].back() != strArr[(i + 1) % n].front()) {
                        return false;
                  }
            }

            // If all conditions are met, return true
            return true;
      }
};
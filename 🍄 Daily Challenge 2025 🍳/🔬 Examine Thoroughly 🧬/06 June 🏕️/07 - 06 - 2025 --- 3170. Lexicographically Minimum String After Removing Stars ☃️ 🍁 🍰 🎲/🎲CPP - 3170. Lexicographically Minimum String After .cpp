//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3170

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      string clearStars(string inputStr) {
            vector<stack<int>> charIndices(26);  // 26 stacks for a-z
            vector<char> chars(inputStr.begin(), inputStr.end());

            // Traverse the string
            for (int i = 0; i < chars.size(); ++i) {
                  if (chars[i] != '*') {
                        // Store index of character
                        charIndices[chars[i] - 'a'].push(i);
                  } else {
                        // Find and mark the smallest available letter
                        for (int j = 0; j < 26; ++j) {
                              if (!charIndices[j].empty()) {
                                    int pos = charIndices[j].top();
                                    charIndices[j].pop();
                                    chars[pos] = '*';  // Mark it as removed
                                    break;
                              }
                        }
                  }
            }

            // Build final result by ignoring '*'
            string result;
            for (char ch : chars) {
                  if (ch != '*') {
                        result += ch;
                  }
            }

            return result;
      }
};

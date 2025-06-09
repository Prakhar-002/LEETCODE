//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2434

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      string robotWithString(string s) {
            vector<int> cnt(26, 0);  // Frequency count of each character

            // Count each character in the input string
            for (char c : s) {
                  cnt[c - 'a']++;
            }

            stack<char> stk;          // Stack to simulate robot holding characters
            string res = "";          // Final result string
            char minChar = 'a';       // Current minimum character that we can expect

            for (char c : s) {
                  stk.push(c);              // Robot picks up character
                  cnt[c - 'a']--;           // Decrease frequency as it's used

                  // Update minChar to next available smallest character
                  while (minChar <= 'z' && cnt[minChar - 'a'] == 0) {
                        minChar++;
                  }

                  // Write from stack as long as top is <= minChar
                  while (!stk.empty() && stk.top() <= minChar) {
                        res += stk.top();  // Append to result
                        stk.pop();         // Remove from stack
                  }
            }

            return res;
      }
};

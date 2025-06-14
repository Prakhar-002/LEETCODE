//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2566

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = log(num)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int minMaxDifference(int num) {
            // Convert number to string
            string s = to_string(num);
            string maxStr = s;
            string minStr = s;

            int pos = 0;

            // Find the first digit that is not '9'
            while (pos < s.size() && s[pos] == '9') {
                  pos++;
            }

            // Replace all occurrences of that digit with '9' for maximum number
            if (pos < s.size()) {
                  char target = s[pos];
                  for (char &c : maxStr) {
                        if (c == target)
                              c = '9';
                  }
            }

            // Replace all occurrences of the first digit with '0' for minimum number
            char firstDigit = s[0];
            for (char &c : minStr) {
                  if (c == firstDigit)
                        c = '0';
            }

            // Convert both strings back to integers and return the difference
            return stoi(maxStr) - stoi(minStr);
      }
};

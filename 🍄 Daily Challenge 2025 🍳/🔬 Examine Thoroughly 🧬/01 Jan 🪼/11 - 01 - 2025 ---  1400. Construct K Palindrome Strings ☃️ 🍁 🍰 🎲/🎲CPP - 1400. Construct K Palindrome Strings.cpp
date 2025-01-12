//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1400

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
      bool canConstruct(string s, int k) {
            // If the string length is less than k, constructing k palindromes is impossible.
            if (s.length() < k) {
                  return false;
            }

            // If the string length equals k, each character can form a single-character palindrome.
            if (s.length() == k) {
                  return true;
            }

            // Count the frequency of each character in the string.
            vector<int> charCount(26, 0);
            for (char ch : s) {
                  charCount[ch - 'a']++;
            }

            // Count the number of characters with odd frequencies.
            int oddCount = 0;
            for (int freq : charCount) {
                  if (freq % 2 != 0) {
                        oddCount++;
                  }
            }

            // We can construct k palindromes if the odd frequencies are less than or equal to k.
            return oddCount <= k;
      }
};

//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2273

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      vector<string> removeAnagrams(vector<string>& words) {
            vector<string> result;
            result.push_back(words[0]);

            // Iterate through each consecutive pair of words
            for (int i = 1; i < (int)words.size(); ++i) {
                  if (!isAnagram(words[i - 1], words[i])) {
                        result.push_back(words[i]);
                  }
            }

            return result;
      }

private:
      // Helper function to check if two strings are anagrams
      bool isAnagram(const string& a, const string& b) {
            if (a.size() != b.size()) return false;

            vector<int> freq(26, 0);
            for (char c : a) freq[c - 'a']++;
            for (char c : b) freq[c - 'a']--;

            for (int f : freq)
                  if (f != 0) return false;

            return true;
      }
};

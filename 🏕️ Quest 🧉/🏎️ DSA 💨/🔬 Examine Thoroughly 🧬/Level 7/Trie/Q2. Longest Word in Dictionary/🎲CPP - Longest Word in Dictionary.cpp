//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.4 Q2

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(words)

// ? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      string longestWord(vector<string>& words) {
            // Sort words lexicographically so that for equal length
            // the lexicographically smallest comes first.
            sort(words.begin(), words.end());

            // Unordered set to store words that can be built so far.
            unordered_set<string> builtWords;

            string result = "";

            for (const string& w : words) {
                  // If the word length is 1, it is always valid.
                  // Otherwise, check if its prefix (without last char) exists in builtWords.
                  if (w.size() == 1 || builtWords.count(w.substr(0, w.size() - 1))) {
                        // Update result if this word is longer than the current result.
                        if (w.size() > result.size()) {
                              result = w;
                        }
                        // Add current word so it can help build longer words.
                        builtWords.insert(w);
                  }
            }

            return result;
      }
};

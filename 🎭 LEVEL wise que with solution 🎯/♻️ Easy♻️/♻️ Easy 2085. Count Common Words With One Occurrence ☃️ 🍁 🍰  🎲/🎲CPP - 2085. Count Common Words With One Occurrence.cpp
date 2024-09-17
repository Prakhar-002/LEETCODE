//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2085

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Total no of words 

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
      int countWords(vector<string>& words1, vector<string>& words2) {
            // `wordsOne` will count occurrences of each word in `words1`
            unordered_map<string, int> wordsOne;
            // `wordsTwo` will count occurrences of each word in `words2`
            unordered_map<string, int> wordsTwo;

            // iterates through each word in `words1`
            for (const auto& word : words1) {
                  // increments the corresponding count in the `wordsOne`
                  wordsOne[word]++;
            }

            // iterates through each word in `words2`
            for (const auto& word : words2) {
                  // increments the corresponding count in the `wordsTwo`
                  wordsTwo[word]++;
            }

            // hold the count of words that appear exactly once in both lists
            int res = 0;

            // iterates through each word in `words1`
            for (const auto& word : words1) {
                  // word appears exactly once in `words1` and in `words2`
                  if (wordsOne[word] == 1 && wordsTwo[word] == 1) {
                        // increments `res` by `1`
                        res++;
                  }
            }

            // returned as the result
            return res;
      }
};
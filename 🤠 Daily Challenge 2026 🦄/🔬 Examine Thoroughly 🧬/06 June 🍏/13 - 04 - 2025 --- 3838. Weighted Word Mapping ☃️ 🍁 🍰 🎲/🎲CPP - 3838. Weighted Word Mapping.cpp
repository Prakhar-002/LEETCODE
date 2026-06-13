//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3838

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      string mapWordWeights(vector<string>& words, vector<int>& weights) {
            // Maps weight mod 26 back to a letter (0→'z', 1→'y', ..., 25→'a')
            char wordMap[] = {
                  'z','y','x','w','v','u','t','s','r','q',
                  'p','o','n','m','l','k','j','i','h','g',
                  'f','e','d','c','b','a'
            };

            string res = "";

            for (string& word : words) {
                  int weight = 0;

                  // Sum weights of each character in the word
                  for (char ch : word) {
                        weight += weights[ch - 'a'];
                  }

                  // Map the mod result to its corresponding letter
                  res += wordMap[weight % 26];
            }

            return res;
      }
};
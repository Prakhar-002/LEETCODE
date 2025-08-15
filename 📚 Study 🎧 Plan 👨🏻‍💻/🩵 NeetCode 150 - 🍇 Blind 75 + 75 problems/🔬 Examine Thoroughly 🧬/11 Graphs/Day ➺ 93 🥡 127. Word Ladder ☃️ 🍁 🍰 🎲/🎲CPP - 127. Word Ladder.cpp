//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 127

//? ⌚ Time complexity ➺ O(n * m ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m ^ 2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
            // Use a set for O(1) lookups and removals.
            unordered_set<string> words(wordList.begin(), wordList.end());

            // ----------------------------------------------------------
            // Initial checks:
            // ----------------------------------------------------------
            if (!words.count(endWord)) {
                  return 0;
            }

            // BFS queue, initialized with the starting word.
            queue<string> q;
            q.push(beginWord);
            // `res` will track the length of the transformation sequence.
            int res = 0;

            // ----------------------------------------------------------
            // Perform BFS
            // ----------------------------------------------------------
            while (!q.empty()) {
                  // Each level in the BFS corresponds to one step in the ladder.
                  res++;
                  // Process all nodes at the current level.
                  int levelSize = q.size();
                  for (int i = 0; i < levelSize; ++i) {
                        string node = q.front();
                        q.pop();
                        // If we've reached the endWord, return the current length.
                        if (node == endWord) {
                              return res;
                        }

                        // ----------------------------------------------------------
                        // Generate all possible one-letter-difference neighbors.
                        // ----------------------------------------------------------
                        for (int j = 0; j < node.length(); ++j) {
                              char originalChar = node[j];
                              // Iterate through all characters 'a' through 'z'.
                              for (char c = 'a'; c <= 'z'; ++c) {
                                    if (c == originalChar) continue;
                                    node[j] = c;
                                    // If this neighbor is in our word list:
                                    if (words.count(node)) {
                                          // Add it to the queue for the next level.
                                          q.push(node);
                                          // Remove from word list to prevent cycles.
                                          words.erase(node);
                                    }
                              }
                              node[j] = originalChar; // Restore
                        }
                  }
            }
            // If the queue becomes empty and we haven't found the endWord, it's impossible.
            return 0;
      }
};

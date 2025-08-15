//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 127

//? ⌚ Time complexity ➺ O(n * m ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m ^ 2)

import java.util.*;

class Solution {
      public int ladderLength(String beginWord, String endWord, List<String> wordList) {
            // Use a set for O(1) lookups and removals.
            Set<String> words = new HashSet<>(wordList);

            // ----------------------------------------------------------
            // Initial checks:
            // ----------------------------------------------------------
            if (!words.contains(endWord)) {
                  return 0;
            }

            // BFS queue, initialized with the starting word.
            Queue<String> q = new LinkedList<>();
            q.offer(beginWord);
            // `res` will track the length of the transformation sequence.
            int res = 0;

            // ----------------------------------------------------------
            // Perform BFS
            // ----------------------------------------------------------
            while (!q.isEmpty()) {
                  // Each level in the BFS corresponds to one step in the ladder.
                  res++;
                  // Process all nodes at the current level.
                  int levelSize = q.size();
                  for (int i = 0; i < levelSize; i++) {
                        String node = q.poll();
                        // If we've reached the endWord, return the current length.
                        if (node.equals(endWord)) {
                              return res;
                        }

                        // ----------------------------------------------------------
                        // Generate all possible one-letter-difference neighbors.
                        // ----------------------------------------------------------
                        char[] nodeChars = node.toCharArray();
                        for (int j = 0; j < nodeChars.length; j++) {
                              char originalChar = nodeChars[j];
                              // Iterate through all characters 'a' through 'z'.
                              for (char c = 'a'; c <= 'z'; c++) {
                                    if (c == originalChar)
                                          continue;
                                    nodeChars[j] = c;
                                    String nei = new String(nodeChars);
                                    // If this neighbor is in our word list:
                                    if (words.contains(nei)) {
                                          // Add it to the queue for the next level.
                                          q.offer(nei);
                                          // Remove from word list to prevent cycles.
                                          words.remove(nei);
                                    }
                              }

                              nodeChars[j] = originalChar; // Restore original character
                        }
                  } 
            }

            // If the queue becomes empty and we haven't found the endWord, it's impossible.
            return 0;
      }
}

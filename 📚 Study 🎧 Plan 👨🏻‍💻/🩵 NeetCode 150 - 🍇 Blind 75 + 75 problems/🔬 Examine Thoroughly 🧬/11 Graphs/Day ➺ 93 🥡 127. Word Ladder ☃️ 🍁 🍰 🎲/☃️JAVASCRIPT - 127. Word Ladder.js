//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 127

//? ⌚ Time complexity ➺ O(n * m ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m ^ 2)

var ladderLength = function (beginWord, endWord, wordList) {
      // Use a set for O(1) lookups and removals.
      const words = new Set(wordList);

      // ----------------------------------------------------------
      // Initial checks:
      // ----------------------------------------------------------
      if (!words.has(endWord)) {
            return 0;
      }

      // BFS queue, initialized with the starting word.
      const q = [beginWord];
      // `res` will track the length of the transformation sequence.
      let res = 0;

      // ----------------------------------------------------------
      // Perform BFS
      // ----------------------------------------------------------
      while (q.length > 0) {
            // Each level in the BFS corresponds to one step in the ladder.
            res++;
            // Process all nodes at the current level.
            let levelSize = q.length;
            for (let i = 0; i < levelSize; i++) {
                  const node = q.shift();
                  // If we've reached the endWord, return the current length.
                  if (node === endWord) {
                        return res;
                  }

                  // ----------------------------------------------------------
                  // Generate all possible one-letter-difference neighbors.
                  // ----------------------------------------------------------
                  for (let j = 0; j < node.length; j++) {
                        // Iterate through all characters 'a' through 'z'.
                        for (let k = 97; k < 123; k++) {
                              const newChar = String.fromCharCode(k);
                              if (newChar === node[j]) continue;

                              const nei = node.slice(0, j) + newChar + node.slice(j + 1);
                              // If this neighbor is in our word list:
                              if (words.has(nei)) {
                                    // Add it to the queue for the next level.
                                    q.push(nei);
                                    // Remove from word list to prevent cycles.
                                    words.delete(nei);
                              }
                        }
                  }
            }
      }

      // If the queue becomes empty and we haven't found the endWord, it's impossible.
      return 0;
};

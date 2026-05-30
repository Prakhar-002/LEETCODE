//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3093

// ? ⌚ Time complexity ➺ O(C + Q) 👉🏻  C = Σ len(wordsContainer[i])

// ? 🧺 Space complexity ➺ O(c) 👉🏻     Q = Σ len(wordsQuery[i])

var stringIndices = function(wordsContainer, wordsQuery) {

      // Each Trie node represents a suffix path.
      // Example:
      // "abcd" is inserted as d -> c -> b -> a
      function TrieNode() {
            return {
                  // Index of the shortest container word
                  // passing through this suffix node.
                  idx: -1,

                  // Children for letters a-z.
                  children: new Array(26).fill(null)
            };
      }

      // Root of the suffix trie
      const root = TrieNode();

      // ==================================================
      // Build the Suffix Trie
      // ==================================================
      for (let i = 0; i < wordsContainer.length; i++) {

            const word = wordsContainer[i];

            // Root stores the globally shortest word.
            // This will be used when no suffix match exists.
            if (
                  root.idx === -1 ||
                  word.length < wordsContainer[root.idx].length
            ) {
                  root.idx = i;
            }

            let node = root;

            // Insert the word in reverse order.
            // Example:
            // "abcd" -> d -> c -> b -> a

            // Reversing words converts suffix matching
            // into normal Trie traversal.
            for (let j = word.length - 1; j >= 0; j--) {

                  const idx = word.charCodeAt(j) - 97;

                  // Create child node if it doesn't exist
                  if (!node.children[idx]) {
                        node.children[idx] = TrieNode();
                  }

                  // Move to next suffix node
                  node = node.children[idx];

                  // Store the shortest word index
                  // for the current suffix.
                  //
                  // Example:
                  // words = ["abcd", "bcd", "cd"]
                  //
                  // For suffix "cd",
                  // store index of "cd" because
                  // it is the shortest matching word.
                  if (
                        node.idx === -1 ||
                        word.length < wordsContainer[node.idx].length
                  ) {
                        node.idx = i;
                  }
            }
      }

      // ==================================================
      // Process Queries
      // ==================================================
      const ans = [];

      for (const word of wordsQuery) {

            let node = root;

            // Default answer:
            // globally shortest container word.
            let best = root.idx;

            // Traverse query from right to left
            // to find the longest matching suffix.
            for (let j = word.length - 1; j >= 0; j--) {

                  const idx = word.charCodeAt(j) - 97;

                  // If suffix path does not exist,
                  // no longer suffix match is possible.
                  if (!node.children[idx]) {
                        break;
                  }

                  // Move deeper into the suffix trie
                  node = node.children[idx];

                  // Since we matched one more character,
                  // we found a longer suffix match.
                  //
                  // This node already stores the index
                  // of the shortest word having this suffix.
                  best = node.idx;
            }

            ans.push(best);
      }

      return ans;
};
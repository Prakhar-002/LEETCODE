//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 269

//? ⌚ Time complexity ➺ O(N + V + E)

//? 🧺 Space complexity ➺ O(V + E)

var foreignDictionary = function (words) {
      // ----------------------------------------------------------
      // Step 1: Build Adjacency List (Graph Construction)
      // ----------------------------------------------------------
      // `adj` is an adjacency list (as an object) where keys are characters and
      // values are Sets of characters that must come after the key character.
      const adj = {};
      // Initialize the graph with all unique characters present in the words.
      for (const word of words) {
            for (const char of word) {
                  // Using a Set ensures that each edge is stored only once.
                  adj[char] = new Set();
            }
      }

      // Compare adjacent words to find ordering rules (edges).
      for (let i = 0; i < words.length - 1; i++) {
            const w1 = words[i];
            const w2 = words[i + 1];
            const minLen = Math.min(w1.length, w2.length);

            // Edge case: If a longer word is a prefix of a shorter one (e.g., "abc", "ab"),
            // the dictionary is invalid according to the problem rules.
            if (
                  w1.length > w2.length &&
                  w1.slice(0, minLen) === w2.slice(0, minLen)
            ) {
                  return '';
            }

            // Find the first differing character to establish an ordering rule.
            for (let j = 0; j < minLen; j++) {
                  if (w1[j] !== w2[j]) {
                        // The character from w1 must come before the character from w2.
                        // Add a directed edge from w1[j] to w2[j].
                        adj[w1[j]].add(w2[j]);
                        // Once the first difference is found, stop comparing these two words.
                        break;
                  }
            }
      }

      // ----------------------------------------------------------
      // Step 2: Topological Sort using DFS
      // ----------------------------------------------------------
      // `visited` is a map to track the state of each node for cycle detection.
      // - Not in `visited`: Not visited yet.
      // - visited[char] = true: Currently in the recursion stack (visiting).
      // - visited[char] = false: Already visited and finished processing.
      const visited = {};
      // `res` will store the topologically sorted characters in reverse order.
      const res = [];

      const dfs = (char) => {
            // If the character is in `visited`, we can determine its state.
            if (char in visited) {
                  return visited[char]; // Returns true if it's a cycle, false if already processed.
            }

            // Mark the current character as being in the recursion stack (visiting).
            visited[char] = true;

            // Recursively call DFS on all neighboring characters.
            for (const neighChar of adj[char]) {
                  if (dfs(neighChar)) { // If a cycle is detected downstream, propagate it up.
                        return true;
                  }
            }

            // Mark the character as processed (removed from recursion stack).
            visited[char] = false;
            // Add the character to the result list (post-order traversal).
            res.push(char);
            return false; // No cycle found from this path.
      };

      // ----------------------------------------------------------
      // Step 3: Execute DFS and Format Result
      // ----------------------------------------------------------
      // Iterate through all characters to ensure all disconnected components are visited.
      for (const char in adj) {
            if (dfs(char)) { // If DFS detects a cycle, the ordering is invalid.
                  return '';
            }
      }

      // The `res` array is built in post-order, so it's the reverse of the topological sort.
      // Reverse it to get the correct order.
      res.reverse();
      // Join the characters to form the final result string.
      return res.join('');
};

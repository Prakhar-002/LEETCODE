#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 269

#? ⌚ Time complexity ➺ O(N + V + E)

#? 🧺 Space complexity ➺ O(V + E)

from typing import List 

class Solution:
      def foreignDictionary(self, words: List[str]) -> str:
            # ----------------------------------------------------------
            # Step 1: Build Adjacency List (Graph Construction)
            # ----------------------------------------------------------
            # `adj` is an adjacency list where keys are characters and values are sets of
            # characters that must come after the key character.
            # Initialize the graph with all unique characters present in the words.
            adj = {c: set() for w in words for c in w}

            # Compare adjacent words to find ordering rules.
            for i in range(len(words) - 1):
                  w1, w2 = words[i], words[i + 1]
                  minLen = min(len(w1), len(w2))

                  # Edge case: If a longer word is a prefix of a shorter word (e.g., "abc", "ab"),
                  # the dictionary is invalid.
                  if len(w1) > len(w2) and w1[:minLen] == w2[:minLen]:
                        return ""

                  # Find the first differing character. This gives us an ordering rule.
                  for j in range(minLen):
                        if w1[j] != w2[j]:
                              # The character from w1 must come before the character from w2.
                              # Add a directed edge from w1[j] to w2[j].
                              adj[w1[j]].add(w2[j])
                              # Once we find the first difference, the rest of the strings don't give
                              # us definitive ordering information, so we break.
                              break

            # ----------------------------------------------------------
            # Step 2: Topological Sort using DFS
            # ----------------------------------------------------------
            # `visited` is a map to track the state of each node for DFS-based cycle detection.
            # It has three states:
            # - Not in `visited`: Not visited yet.
            # - `visited[char] = True`: Currently in the recursion stack (visiting). A cycle is detected if we see this again.
            # - `visited[char] = False`: Visited and finished processing.
            visited = {}
            # `res` will store the topologically sorted characters in reverse order (post-order traversal).
            res = []

            def dfs(char):
                  # If the character is already in the recursion stack, we have found a cycle.
                  if char in visited:
                        return visited[char] # Returns True if it's a cycle, False if already processed.

                  # Mark the current character as being in the recursion stack.
                  visited[char] = True

                  # Recursively call DFS on all neighboring characters.
                  for neighChar in adj[char]:
                        if dfs(neighChar): # If a cycle is detected in a downstream path, propagate it up.
                              return True

                        # Mark the character as processed (removed from recursion stack).
                        visited[char] = False
                        # Append the character to the result list (post-order).
                        res.append(char)

            # ----------------------------------------------------------
            # Step 3: Execute DFS and Format Result
            # ----------------------------------------------------------
            # Iterate through all characters in the graph to ensure all disconnected components are visited.
            # Note: Iterating through `adj.keys()` in Python 3 is non-deterministic. For a
            # stable result in case of multiple valid answers, sorting keys is an option.
            for char in adj:
                  if dfs(char): # If DFS detects a cycle, the ordering is invalid.
                        return ""

            # The `res` list is built in post-order, so it's the reverse of the topological sort.
            # Reverse it to get the correct order.
            res.reverse()
            # Join the characters to form the final result string.
            return "".join(res)

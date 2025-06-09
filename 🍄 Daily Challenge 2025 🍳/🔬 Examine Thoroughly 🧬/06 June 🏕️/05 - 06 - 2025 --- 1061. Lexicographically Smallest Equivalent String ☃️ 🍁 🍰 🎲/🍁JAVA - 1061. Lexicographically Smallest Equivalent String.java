//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1061

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = Unions (s1, s2)

//? 🧺 Space complexity ➺ O(1)    -> m = Mapping baseStr

class Solution {

      int[] parent = new int[26]; // Union-Find parent array

      // Find operation with path compression
      private int find(int x) {
            if (parent[x] != x) {
                  parent[x] = find(parent[x]); // Path compression
            }
            return parent[x];
      }

      public String smallestEquivalentString(String s1, String s2, String baseStr) {
            // Initialize each character as its own parent
            for (int i = 0; i < 26; i++) {
                  parent[i] = i;
            }

            // Union the characters in s1 and s2
            for (int i = 0; i < s1.length(); i++) {
                  int a = s1.charAt(i) - 'a';
                  int b = s2.charAt(i) - 'a';
                  int pa = find(a);
                  int pb = find(b);

                  // Set the smaller character as parent
                  if (pa < pb) {
                        parent[pb] = pa;
                  } else {
                        parent[pa] = pb;
                  }
            }

            // Build the result by mapping each char in baseStr to its group leader
            StringBuilder result = new StringBuilder();
            for (char ch : baseStr.toCharArray()) {
                  int mapped = find(ch - 'a');
                  result.append((char) (mapped + 'a'));
            }

            return result.toString();
      }
}

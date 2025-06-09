//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1061

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = Unions (s1, s2)

//? 🧺 Space complexity ➺ O(1)    -> m = Mapping baseStr

class Solution {
public:
      int parent[26];  // Union-Find parent array

      // Find with path compression
      int find(int x) {
            if (parent[x] != x) {
                  parent[x] = find(parent[x]);  // Path compression
            }
            return parent[x];
      }

      string smallestEquivalentString(string s1, string s2, string baseStr) {
            // Initialize each character's parent to itself
            for (int i = 0; i < 26; ++i) {
                  parent[i] = i;
            }

            // Union characters from s1 and s2
            for (int i = 0; i < s1.length(); ++i) {
                  int a = s1[i] - 'a';
                  int b = s2[i] - 'a';
                  int pa = find(a);
                  int pb = find(b);

                  // Make the smaller lex character the parent
                  if (pa < pb) {
                        parent[pb] = pa;
                  } else {
                        parent[pa] = pb;
                  }
            }

            // Build the result from baseStr
            string res;
            for (char ch : baseStr) {
                  int mapped = find(ch - 'a');
                  res += (char)(mapped + 'a');
            }

            return res;
      }
};

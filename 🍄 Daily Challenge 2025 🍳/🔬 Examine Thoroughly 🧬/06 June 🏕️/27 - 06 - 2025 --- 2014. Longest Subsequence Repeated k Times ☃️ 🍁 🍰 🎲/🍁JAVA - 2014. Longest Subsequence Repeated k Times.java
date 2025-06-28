//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2014

//? ⌚ Time complexity ➺ O(n + m! * k * m) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n) ->  m <= 7

class Solution {
      public String longestSubsequenceRepeatedK(String s, int k) {
            int n = s.length();
            int[] str = new int[n];

            // Convert characters to integer representation (0 for 'a' to 25 for 'z')
            for (int i = 0; i < n; i++) {
                  str[i] = s.charAt(i) - 'a';
            }

            // Precompute next occurrences of each character
            int[][] nxt = new int[n + 1][26];
            for (int i = 0; i <= n; i++) {
                  Arrays.fill(nxt[i], n);
            }

            for (int i = n - 1; i >= 0; i--) {
                  System.arraycopy(nxt[i + 1], 0, nxt[i], 0, 26);
                  nxt[i][str[i]] = i;
            }

            // Frequency count
            int[] cnt = new int[26];
            for (int c : str)
                  cnt[c]++;
            List<Integer> a = new ArrayList<>();
            for (int ch = 0; ch < 26; ch++) {
                  for (int t = 0; t < cnt[ch] / k; t++) {
                        a.add(ch);
                  }
            }

            // Try all permutations from longest to shortest in reverse lexicographical
            // order
            Collections.sort(a, Collections.reverseOrder());

            for (int len = a.size(); len > 0; len--) {
                  List<List<Integer>> perms = new ArrayList<>();
                  generatePermutations(a, len, new ArrayList<>(), new boolean[a.size()], perms);

                  for (List<Integer> seq : perms) {
                        if (isSubsequence(seq, k, nxt, n)) {
                              StringBuilder res = new StringBuilder();
                              for (int ch : seq) {
                                    res.append((char) (ch + 'a'));
                              }
                              return res.toString();
                        }
                  }
            }
            return "";
      }

      private boolean isSubsequence(List<Integer> seq, int k, int[][] nxt, int n) {
            int i = -1;
            for (int repeat = 0; repeat < k; repeat++) {
                  for (int ch : seq) {
                        i = nxt[i + 1][ch];
                        if (i == n)
                              return false;
                  }
            }
            return true;
      }

      private void generatePermutations(List<Integer> a, int len, List<Integer> curr, boolean[] used,
                  List<List<Integer>> res) {
            if (curr.size() == len) {
                  res.add(new ArrayList<>(curr));
                  return;
            }
            for (int i = 0; i < a.size(); i++) {
                  if (used[i] || (i > 0 && a.get(i).equals(a.get(i - 1)) && !used[i - 1]))
                        continue;
                  used[i] = true;
                  curr.add(a.get(i));
                  generatePermutations(a, len, curr, used, res);
                  curr.remove(curr.size() - 1);
                  used[i] = false;
            }
      }
}

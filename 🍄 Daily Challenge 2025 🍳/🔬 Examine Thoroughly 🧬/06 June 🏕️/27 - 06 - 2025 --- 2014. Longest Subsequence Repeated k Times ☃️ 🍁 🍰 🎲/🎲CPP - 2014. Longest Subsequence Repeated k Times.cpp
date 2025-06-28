//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2014

//? ⌚ Time complexity ➺ O(n + m! * k * m) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n) ->  m <= 7

class Solution {
public:
      string longestSubsequenceRepeatedK(string s, int k) {
            int n = s.size();
            vector<int> str(n);
            for (int i = 0; i < n; i++) {
                  str[i] = s[i] - 'a';
            }

            vector<vector<int>> nxt(n + 1, vector<int>(26, n));
            for (int i = n - 1; i >= 0; i--) {
                  nxt[i] = nxt[i + 1];
                  nxt[i][str[i]] = i;
            }

            vector<int> cnt(26);
            for (int ch : str)
                  cnt[ch]++;
            vector<int> a;
            for (int ch = 0; ch < 26; ch++) {
                  for (int t = 0; t < cnt[ch] / k; t++) {
                        a.push_back(ch);
                  }
            }

            sort(a.rbegin(), a.rend());

            for (int len = a.size(); len > 0; len--) {
                  vector<vector<int>> perms;
                  vector<bool> used(a.size(), false);
                  vector<int> curr;
                  generatePermutations(a, len, curr, used, perms);
                  for (auto &seq : perms) {
                        if (isSubsequence(seq, k, nxt, n)) {
                              string res;
                              for (int ch : seq)
                                    res += (char)(ch + 'a');
                              return res;
                        }
                  }
            }
            return "";
      }

      bool isSubsequence(vector<int> &seq, int k, vector<vector<int>> &nxt, int n) {
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

      void generatePermutations(vector<int> &a, int len, vector<int> &curr, vector<bool> &used, vector<vector<int>> &res) {
            if (curr.size() == len) {
                  res.push_back(curr);
                  return;
            }
            for (int i = 0; i < a.size(); i++) {
                  if (used[i] || (i > 0 && a[i] == a[i - 1] && !used[i - 1]))
                        continue;
                  used[i] = true;
                  curr.push_back(a[i]);
                  generatePermutations(a, len, curr, used, res);
                  curr.pop_back();
                  used[i] = false;
            }
      }
};

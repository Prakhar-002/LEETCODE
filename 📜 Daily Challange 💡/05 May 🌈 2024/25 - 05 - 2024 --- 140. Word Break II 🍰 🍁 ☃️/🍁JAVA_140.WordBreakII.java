//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 140 

import java.util.*;

class Solution {
      public static void backtracking(String s, List<String> wordDict, int i, List<String> res, List<String> cur) {

            if (i == s.length()) {
                  String curStr = String.join(" ", cur);
                  if (!res.contains(curStr)) {
                        res.add(curStr);
                  }
                  return;
            }

            for (int j = i; j < s.length(); j++) {
                  String word = s.substring(i, j + 1);
                  if (wordDict.contains(word)) {
                        cur.add(word);
                        backtracking(s, wordDict, j + 1, res, cur);
                        cur.remove(cur.size() - 1);
                  }
            }
      }

      public List<String> wordBreak(String s, List<String> wordDict) {
            List<String> res = new ArrayList<>();
            List<String> cur = new ArrayList<>();
            backtracking(s, wordDict, 0, res, cur);
            return res;
      }
}
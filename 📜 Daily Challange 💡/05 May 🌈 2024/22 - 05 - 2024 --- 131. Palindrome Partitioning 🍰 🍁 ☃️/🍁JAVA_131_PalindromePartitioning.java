//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 131 

import java.util.*;

class Solution {

      public static boolean isPali(String str, int l, int r) {
            while (l < r) {
                  if (str.charAt(l++) != str.charAt(r--)) {
                        return false;
                  }
            }
            return true;
      }

      public void subStringArr(String str, int i, List<String> part, List<List<String>> result) {
            if (i >= str.length()) {
                  result.add(new ArrayList<>(part));
                  return;
            }

            for (int j = i; j < str.length(); j++) {
                  if (isPali(str, i, j)) {
                        part.add(str.substring(i, j + 1));
                        subStringArr(str, j + 1, part, result);
                        part.remove(part.size() - 1);
                  }

            }
      }

      public List<List<String>> partition(String s) {
            List<List<String>> result = new ArrayList<>();
            List<String> part = new ArrayList<>();

            subStringArr(s, 0, part, result);
            return result;
      }
}
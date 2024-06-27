//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 2486 

class Solution {
      public int appendCharacters(String s, String t) {
            int sIdx = 0, tIdx = 0;
            int sLen = s.length(), tLen = t.length();

            while (sIdx < sLen && tIdx < tLen) {
                  if (s.charAt(sIdx) == t.charAt(tIdx)) {
                        tIdx++;
                  }
                  sIdx++;
            }
            return tLen - tIdx;
      }
} 
//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 409 

class Solution {
      public int longestPalindrome(String s) {
            int freq[] = new int[52];

            int maxPali = 0;
            boolean isOdd = false;
            for (int i = 0; i < s.length(); i++) {
                  if (s.charAt(i) > 96) {
                        freq[s.charAt(i) - 'a']++;
                  } else {
                        freq[(s.charAt(i) - 'A') + 26]++;
                  }
            } 

            for (int i = 0; i < freq.length; i++) {
                  if (freq[i] % 2 == 0) {
                        maxPali += freq[i];
                  } else {
                        isOdd = true;
                        maxPali += freq[i] - 1;
                  }
            }

            if (isOdd) {
                  return maxPali + 1;
            } 

            return maxPali;
      }
}
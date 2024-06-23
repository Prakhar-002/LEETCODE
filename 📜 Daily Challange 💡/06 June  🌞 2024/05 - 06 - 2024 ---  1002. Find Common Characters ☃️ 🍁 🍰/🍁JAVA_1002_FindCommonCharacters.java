//! https://github.com/Prakhar-002/LEETCODE

import java.util.ArrayList;

class Solution {

      public int[] freqCounter(String s) {
            int freq[] = new int[26];

            for (int i = 0; i < s.length(); i++) {
                  freq[s.charAt(i) - 'a']++;
            }

            return freq; 
      }

      public List<String> commonChars(String[] words) {
            ArrayList<String> commonChars = new ArrayList<>();

            int commonWordFreq[] = freqCounter(words[0]);

            for (int i = 1; i < words.length; i++) {
                  int curWordFreq[] = freqCounter(words[i]);
                  for (int j = 0; j < 26; j++) {
                        commonWordFreq[j] = Math.min(commonWordFreq[j], curWordFreq[j]);
                  }
            }

            for (int i = 0; i < commonWordFreq.length; i++) {
                  int k = commonWordFreq[i];
                  if (k != 0) {
                        while (k-- > 0) {
                              commonChars.add(String.valueOf((char) (i + 'a')));
                        }
                  }
            }

            return commonChars;
      }
}
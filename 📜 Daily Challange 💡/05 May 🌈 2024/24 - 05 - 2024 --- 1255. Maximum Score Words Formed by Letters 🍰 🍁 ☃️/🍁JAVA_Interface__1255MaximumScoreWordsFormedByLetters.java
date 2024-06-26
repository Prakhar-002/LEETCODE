//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1255 


class Solution {

      public interface Solver {
            public int getScore(String word);

            public boolean canFormWord(String word, int[] letterCount);

            public int backtracking(int i);

      } 

      public int[] counter(char[] letters) {
            int freqCount[] = new int[26];

            for (int i = 0; i < letters.length; i++) {
                  freqCount[letters[i] - 'a']++;
            }

            return freqCount;
      }

      public int[] wordCounter(String word) {
            int freqCount[] = new int[26];

            for (int i = 0; i < word.length(); i++) {
                  char ch = word.charAt(i);
                  freqCount[ch - 'a']++;
            }

            return freqCount;
      }

      public int maxScoreWords(String[] words, char[] letters, int[] score) {
            int[] letterCount = counter(letters);

            Solver sol = new Solver() {

                  public boolean canFormWord(String word, int[] letterCount) {
                        int wordCount[] = wordCounter(word);

                        for (int i = 0; i < score.length; i++) {
                              if (wordCount[i] > letterCount[i]) {
                                    return false;
                              }
                        }

                        return true;
                  }

                  public int getScore(String word) {
                        int res = 0;

                        for (int i = 0; i < word.length(); i++) {
                              char ch = word.charAt(i);

                              res += score[ch - 'a'];
                        }

                        return res;
                  }

                  public int backtracking(int i) {
                        if (i == words.length) {
                              return 0;
                        }

                        int res = backtracking(i + 1);

                        if (canFormWord(words[i], letterCount)) {

                              for (int j = 0; j < words[i].length(); j++) {
                                    char ch = words[i].charAt(j);

                                    letterCount[ch - 'a']--;
                              }

                              res = Math.max(res, getScore(words[i]) + backtracking(i + 1));

                              for (int j = 0; j < words[i].length(); j++) {
                                    char ch = words[i].charAt(j);

                                    letterCount[ch - 'a']++;
                              }
                        }
                        return res;
                  }
            };

            return sol.backtracking(0);
      }
}
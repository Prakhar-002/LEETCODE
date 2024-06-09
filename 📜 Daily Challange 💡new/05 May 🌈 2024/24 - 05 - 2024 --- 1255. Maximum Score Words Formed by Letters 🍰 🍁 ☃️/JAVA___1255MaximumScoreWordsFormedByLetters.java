class Solution {

    public int ans(String words[], int score[], int freq[], int i) {
        if (i == words.length) {
            return 0;
        }

        int res = ans(words, score, freq, i + 1);
        int wordScore = 0;
        boolean flag = true;
        for (int j = 0; j < words[i].length(); j++) {
            char ch = words[i].charAt(j);
            if (freq[ch - 'a'] <= 0) {
                flag = false;
            }
            freq[ch - 'a']--;
            wordScore += score[ch - 'a'];
        }

        if (flag) {
            res = Math.max(res, wordScore + ans(words, score, freq, i + 1));
        }

        for (int j = 0; j < words[i].length(); j++) {
            char ch = words[i].charAt(j);
            freq[ch - 'a']++;
        }

        return res;
    }

    public int maxScoreWords(String[] words, char[] letters, int[] score) {
        int freq[] = new int[26];
        for (int i = 0; i < letters.length; i++) {
            char ch = letters[i];
            freq[ch - 'a']++;
        }

        return ans(words, score, freq, 0);
    }
}
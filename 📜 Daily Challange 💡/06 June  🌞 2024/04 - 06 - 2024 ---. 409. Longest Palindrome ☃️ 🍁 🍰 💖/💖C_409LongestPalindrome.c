//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 409 

int longestPalindrome(char* s) {
      int freq[52];

      for (int i = 0; i < 52; i++){
            freq[i] = 0;
      }

      int maxPali = 0;
      bool isOdd = false;

      for (int i = 0; i < strlen(s); i++) {
            if (s[i] > 96) { 
                  freq[s[i] - 'a']++;
            } else {
                  freq[(s[i] - 'A') + 26]++;
            }
      }

      for (int i = 0; i < 52; i++) {
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
var longestPalindrome = function(s){
      let freq = new Array(52).fill(0);
      let maxPali = 0
      let isOdd = false;

      for (let i = 0; i < s.length; i++) {
            if (s.charAt(i).charCodeAt(0) > 96) {
                  freq[s.charAt(i).charCodeAt(0) - 'a'.charCodeAt(0)]++;
            } else {
                  freq[(s.charAt(i).charCodeAt(0) - 'A'.charCodeAt(0)) + 26]++;
            }
      }

      for (let i = 0; i < freq.length; i++) {
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
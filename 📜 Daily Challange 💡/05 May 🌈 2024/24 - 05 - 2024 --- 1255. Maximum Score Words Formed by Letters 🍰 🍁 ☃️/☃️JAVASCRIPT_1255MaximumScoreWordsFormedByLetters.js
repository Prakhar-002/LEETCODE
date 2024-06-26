//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1255 

var maxScoreWords = function(words, letters, score) {
      let freq = new Array(26).fill(0);

      for (let ch of letters) {
            freq[ch.charCodeAt(0) - 'a'.charCodeAt(0)]++;
      }

      var ans = function(i) {
            if (i == words.length) {
                  return 0
            } 

            let res = ans(i + 1)
            let wordScore = 0;
            let flag = true;
            for(let ch of words[i].split("")){
                  if(freq[ch.charCodeAt(0) - 'a'.charCodeAt(0)] <= 0){
                        flag = false;
                  }
                  freq[ch.charCodeAt(0) - 'a'.charCodeAt(0)]--;
                  wordScore += score[ch.charCodeAt(0) - 'a'.charCodeAt(0)];
            }

            if (flag) {
                  res = Math.max(res, wordScore + ans(i + 1));
            }
      
            for (const ch of words[i].split("")) {
                  freq[ch.charCodeAt(0) - 'a'.charCodeAt(0)]++;
            }
      
            return res;
      }

      return ans(0);
};
//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 140 

var wordBreak = function (s, wordDict) {

      var backtracking = function (i) {
            if (i == s.length) {
                  res.push(cur.join(" "));
                  return;
            }

            for (let j = i; j < s.length; j++) {
                  let word = s.slice(i, j + 1);
                  if (wordDict.includes(word)) {
                        cur.push(word);
                        backtracking(j + 1);
                        cur.pop();
                  }
            }
      }

      let res = [];
      let cur = [];
      backtracking(0);
      return res;
};
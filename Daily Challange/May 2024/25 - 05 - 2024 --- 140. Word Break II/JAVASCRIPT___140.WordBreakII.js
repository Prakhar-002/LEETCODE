var wordBreak = function (s, wordDict) {
      res = [];
      cur = [];

      var backtracking = function (i) {
            if (i == s.length) {
                  res.push(cur.join(" "));
                  return;
            }

            for (let j = i; i < s.length; j++) {
                  let word = s.slice(i, j + 1);
                  if (wordDict.includes(word)) {
                        cur.push(word);
                        backtracking(j + 1);
                        cur.pop();
                  }
            }
      }

      backtracking(0);
      return res;
};
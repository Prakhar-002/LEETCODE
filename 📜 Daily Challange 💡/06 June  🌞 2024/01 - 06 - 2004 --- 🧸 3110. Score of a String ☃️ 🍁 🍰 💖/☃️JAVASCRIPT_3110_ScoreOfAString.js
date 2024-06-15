var scoreOfString = function(s) {
      let res = 0;

      for (let i = 0; i < s.length - 1; i++) {
            res += Math.abs(s.charAt(i).charCodeAt(0) - s.charAt(i + 1).charCodeAt(0));
      }
      return res;
};
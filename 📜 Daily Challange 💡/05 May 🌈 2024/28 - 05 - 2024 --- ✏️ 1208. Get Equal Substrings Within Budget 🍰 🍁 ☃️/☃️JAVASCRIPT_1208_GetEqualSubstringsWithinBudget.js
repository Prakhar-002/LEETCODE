//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1208  

var equalSubstring = function(s, t, maxCost) {
      let curCost = 0
      let subStringLen = 0

      let left = 0

      for (let right = 0; right < s.length; right++) {
            curCost += Math.abs(s.charAt(right).charCodeAt(0) - t.charAt(right).charCodeAt(0));
            
            while(curCost > maxCost) {
                  curCost -= Math.abs(s.charAt(left).charCodeAt(0) - t.charAt(left).charCodeAt(0));

                  left++;
            }

            subStringLen = Math.max(subStringLen, right - left + 1);
      }

      return subStringLen;
};
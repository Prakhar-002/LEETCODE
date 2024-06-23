//! https://github.com/Prakhar-002/LEETCODE

var appendCharacters = function(s, t) {
      // Index
      let sIdx = 0, tIdx = 0
      //Length
      let sLen = s.length, tLen = t.length
      
      while(sIdx < sLen && tIdx < tLen){
            if (s.charAt(sIdx) == t.charAt(tIdx)) {
                  tIdx++;
            }
            sIdx++;
      } 

      return tLen - tIdx;
};
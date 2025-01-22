//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 242

//? ⌚ Time complexity ➺ O(s + t) 👉🏻  s, t = len(s), len(t) 

//? 🧺 Space complexity ➺ O(s + t)

var isAnagram = function (s, t) {
      // if length of both string is not equal 
      if (s.length !== t.length) return false;

      // make hashmap for both
      // max length of both hashmaps will be 26 so content space
      const sCount = new Map();
      const tCount = new Map();

      // count the freq of both 
      for (let i = 0; i < s.length; i++) {
            sCount.set(s[i], (sCount.get(s[i]) || 0) + 1);
            tCount.set(t[i], (tCount.get(t[i]) || 0) + 1);
      }

      // check for freq of every char in s
      for (let ch of s) {
            if (sCount.get(ch) !== tCount.get(ch)) return false;
      }

      return true;
};

//-------------------------------------------------------

//? ⌚ Time complexity -> O(N Log N) ->  N = max(len(s), len(t))

//? Space complexity -> O(s + t)  

//* one line

var isAnagram = function(s, t) {
      return s.split('').sort().join('') === t.split('').sort().join('');
};
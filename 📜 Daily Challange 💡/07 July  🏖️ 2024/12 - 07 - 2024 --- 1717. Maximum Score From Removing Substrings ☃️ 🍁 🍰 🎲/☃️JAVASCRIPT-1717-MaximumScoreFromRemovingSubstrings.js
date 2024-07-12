//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1717

//? ⌚ Time complexity -> O(n) 👉 String length 

//? 🧺 Space complexity -> O(n) 👉 using Stack 

var maximumGain = function (s, x, y) {
      // we will call as per the x and y
      return x > y ? removeByPair("ab", x, y, s)
            : removeByPair("ba", y, x, s);
}

var removeByPair = function (pair, x, y, s) {
      // let say x > y
      let points = 0;
      let stack = [];

      // first we will remove "ab"
      for (let ch of s) {
            // check for the ch if it is b and on top of our stack is a
            if (ch === pair[1] && stack.length > 0 && stack[stack.length - 1] === pair[0]) {
                  //  remove a from top
                  stack.pop();
                  // add point for removing
                  points += x;
            } else {
                  // just push every char in stack
                  stack.push(ch);
            }
      }

      // now we will update the string for removing only the "ba" pair from
      // string
      let new_s = stack.join('');
      stack = [];

      //  now we will remove "ba"
      for (let ch of new_s) {
            // check for the ch if it is a and on top of our stack is b
            if (ch === pair[0] && stack.length > 0 && stack[stack.length - 1] === pair[1]) {
                  // remove b from top
                  stack.pop();
                  // add point for removing
                  points += y;
            } else {
                  // just push to our stack
                  stack.push(ch);
            }
      }

      // return total points
      return points;
}




//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1190

//? ⌚ Time complexity -> O(n) 👉 String length

//? 🧺 Space complexity -> O(n) 👉 Making Reverse SubString

var reverseParentheses = function (s) {
      // we shall store i for "(" to j for ")"
      // store pair open parenthesis to its close parenthesis
      const parenPair = new Map();
      // using array as stack for extracting parenthesis
      const stack = [];

      for (let i = 0; i < s.length; i++) {
            const ch = s.charAt(i);
            // if we got open parenthesis store the idx
            if (ch === '(') {
                  stack.push(i);
            } else if (ch === ')') {
                  // i is at close parenthesis
                  // j is at open parenthesis
                  const j = stack.pop();
                  // store the pair (i to j) and (j to i)
                  parenPair.set(i, j);
                  parenPair.set(j, i);
            }
      }

      // preWork is done now main

      let i = 0, direction = 1;
      let revStr = '';

      while (i < s.length) {
            if (s.charAt(i) === '(' || s.charAt(i) === ')') {
                  // if somewhere we found parenthesis
                  // we switch to its corresponding open or close paren
                  i = parenPair.get(i);
                  // and change the direction of adding in result
                  direction = -direction;
            } else {
                  // simply add in our revStr
                  revStr += s.charAt(i);
            }

            // inc our i with direction
            // so either it will go with inc or dec mean -> dir or <- dir
            i += direction;
      }

      // return the resulting string
      return revStr;
};

// ------------------------------------------------------

// ⌚ Time complexity -> O(n ^ 2) 👉 n is String length

// 🧺 Space complexity -> O(n * m) 👉 using Stack m times

var reverseParentheses = function (s) {
      // take an empty array as stack
      const stack = [];

      // Traverse whole character in string
      for (let ch of s) {
            // if we get a close parenthesis
            if (ch === ')') {
                  // partition to store the value btw ()
                  let portion = '';

                  // pop until open parenthesis come
                  // for corresponding open parenthesis
                  while (stack[stack.length - 1] !== '(') {
                        // pop from stack until "(" comes
                        portion += stack.pop();
                  }
                  // pop "(" too
                  stack.pop();
                  // now store the partition itself in stack
                  // cause stack push and pop reverse the string we're done with reverse
                  for (let c of portion) {
                        stack.push(c);
                  }
            }
            // we append ch in stack until a close parenthesis comes
            else {
                  stack.push(ch);
            }
      }

      // join stack values return string
      return stack.join('');
};
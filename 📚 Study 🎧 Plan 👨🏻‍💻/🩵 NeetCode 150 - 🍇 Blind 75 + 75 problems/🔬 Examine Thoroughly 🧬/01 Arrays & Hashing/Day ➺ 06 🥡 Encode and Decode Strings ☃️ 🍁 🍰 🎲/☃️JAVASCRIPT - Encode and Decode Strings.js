//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 271

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strs)

//? 🧺 Space complexity ➺ O(1)

class Solution {

      encode(strs) {
            // Initialize an empty string to store the encoded result
            let res = "";
            // Loop through each string in the list
            for (let s of strs) {
                  // Append the length of the string, a delimiter '#', and the string itself
                  res += s.length + "#" + s;
            }
            // Return the fully encoded string
            return res;
      }

      decode(s) {
            // Initialize an array to store the decoded strings
            let res = [];
            // Pointer to traverse the encoded string
            let i = 0;

            while (i < s.length) {
                  // Find the position of the next delimiter '#'
                  let j = i;
                  while (s[j] !== "#") {
                        j++;
                  }
                  // Extract the length of the next string
                  let length = parseInt(s.slice(i, j));

                  // Move the pointer past the delimiter
                  i = j + 1;

                  // Extract the actual string using the length
                  let str = s.slice(i, i + length);
                  res.push(str);

                  // Move the pointer to the next encoded part
                  i = i + length;
            }
            // Return the decoded list of strings
            return res;
      }
}

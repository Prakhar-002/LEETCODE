//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 443

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(chars)

//? 🧺 Space complexity ➺ O(1)

var compress = function (chars) {
      let n = chars.length;
      let i = 0; // Position to read characters
      let j = 0; // Position to write the compressed result

      while (i < n) {
            let char = chars[i];
            let count = 0;

            // Count the occurrences of the current character
            while (i < n && chars[i] === char) {
                  i++;
                  count++;
            }

            // Write the character to the result
            chars[j] = char;
            j++;

            // If count > 1, write the count as digits
            if (count > 1) {
                  let countStr = count.toString();
                  for (let digit of countStr) {
                        chars[j] = digit;
                        j++;
                  }
            }
      }

      // The final length of the compressed array
      return j;
}
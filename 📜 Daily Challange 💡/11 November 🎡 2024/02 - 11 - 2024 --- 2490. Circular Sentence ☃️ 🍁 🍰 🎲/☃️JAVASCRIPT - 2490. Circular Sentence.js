//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2490

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(strArr)

//? 🧺 Space complexity ➺ O(n)

function isCircularSentence(sentence) {
      // Splitting the sentence into words automatically removes extra spaces
      const strArr = sentence.split(" ");

      const n = strArr.length;

      // Iterate through the words
      for (let i = 0; i < n; i++) {
            // Check if the last character of the current word matches the first character of the next word
            if (strArr[i].slice(-1) !== strArr[(i + 1) % n][0]) {
                  return false;
            }
      }

      // If all conditions are met, return True
      return true;
}

//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1432

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(log n)

var maxDiff = function (num) {
      // Convert number to string for digit manipulation
      let maxStr = num.toString();
      let minStr = maxStr;

      // Make the largest number by replacing the first digit that is not '9' with '9'
      for (let c of maxStr) {
            if (c !== '9') {
                  // Replace all occurrences of this digit with '9'
                  maxStr = maxStr.split(c).join('9');
                  break; // Only one digit type should be replaced
            }
      }

      // Make the smallest number
      for (let i = 0; i < minStr.length; i++) {
            const c = minStr[i];
            if (i === 0) {
                  // For the first digit, if it's not '1', replace all of its occurrences with '1'
                  if (c !== '1') {
                        minStr = minStr.split(c).join('1');
                        break;
                  }
            } else {
                  // For other digits, if it's not '0' and not same as first digit, replace all its occurrences with '0'
                  if (c !== '0' && c !== minStr[0]) {
                        minStr = minStr.split(c).join('0');
                        break;
                  }
            }
      }

      // Convert back to integers and return the difference
      return parseInt(maxStr) - parseInt(minStr);
};

//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 567

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s2)

//? 🧺 Space complexity ➺ O(1)

var checkInclusion = function (s1, s2) {
      // a longer string cannot be a permutation of any part of a shorter string
      if (s1.length > s2.length) {
            // so immediately returns `false`
            return false;
      }

      // creates two frequency arrays, `s1Digits` and `s2Digits` each of size 26
      let s1Digits = new Array(26).fill(0);
      let s2Digits = new Array(26).fill(0);

      // iterates through the first `s1.length` characters of `s1` and `s2`
      for (let i = 0; i < s1.length; i++) {
            // incrementing their frequencies in the `s1Digits` arrays
            s1Digits[s1.charCodeAt(i) - 'a'.charCodeAt(0)]++;
            // incrementing their frequencies in the `s2Digits` arrays
            s2Digits[s2.charCodeAt(i) - 'a'.charCodeAt(0)]++;
      }

      // initializes a counter `matches` to track how many characters 
      // have the same frequency in `s1` and the current window of `s2`
      let matches = 0;

      // iterating through the frequency arrays
      for (let i = 0; i < 26; i++) {
            // incrementing `matches` when frequencies match
            matches += (s1Digits[i] === s2Digits[i] ? 1 : 0);
      }

      let left = 0;

      // Sliding Window Starting from the end of the initial window (`s1.length`)
      // moves through `s2` one character at a time
      for (let right = s1.length; right < s2.length; right++) {
            // If at any point `matches` equals 26
            // all characters in the current window have the same frequency as in `s1`
            if (matches === 26) {
                  // returns `true`
                  return true;
            }

            // For each new character added to the window
            let index = s2.charCodeAt(right) - 'a'.charCodeAt(0);
            // it updates `s2Digits`
            s2Digits[index]++;

            // if the frequencies now match
            if (s1Digits[index] === s2Digits[index]) {
                  // this causes `matches` to increase
                  matches++;
            }
            // if they no longer match
            else if (s1Digits[index] + 1 === s2Digits[index]) {
                  // this causes `matches` to decrease
                  matches--;
            }

            // when a character is removed from the beginning of the window
            index = s2.charCodeAt(left) - 'a'.charCodeAt(0);
            // it updates `s2Digits`
            s2Digits[index]--;

            // if the frequencies now match
            if (s1Digits[index] === s2Digits[index]) {
                  // this causes `matches` to increase
                  matches++;
            }
            // if they no longer match
            else if (s1Digits[index] - 1 === s2Digits[index]) {
                  // this causes `matches` to decrease
                  matches--;
            }

            // increments the `left` index to move the window forward
            left++;
      }

      // Check `matches` for last index whether permutation or not
      return matches === 26;
};


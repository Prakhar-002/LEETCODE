//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2785

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var sortVowels = function (s) {
      const vowels = "aeiouAEIOU";               //      String containing all possible vowels
      const vowCount = {};                       //      Object to count vowels

      //      Count frequency only for vowels
      for (const ch of s) {
            if (vowels.includes(ch)) {
                  vowCount[ch] = (vowCount[ch] || 0) + 1;
            }
      }

      const sortedVowel = "AEIOUaeiou";          //      Sorted vowels (uppercase then lowercase)
      const ans = [];                            //      Array to build result
      let j = 0;                                 //      Pointer in sortedVowel string

      //      Traverse string; substitute vowels in sorted order
      for (let i = 0; i < s.length; i++) {
            const ch = s[i];
            if (!vowels.includes(ch)) {
                  ans.push(ch);                  //      Non-vowel, append as is
            } else {
                  //      Find next available vowel, with remaining count
                  while (j < sortedVowel.length &&
                        (!vowCount[sortedVowel[j]] || vowCount[sortedVowel[j]] === 0)) {
                        j++;
                  }

                  ans.push(sortedVowel[j]);      //      Place smallest available vowel
                  vowCount[sortedVowel[j]] -= 1; //      Decrease count
            }
      }

      return ans.join('');                       //      Return result string
};


//!----------------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var sortVowels = function (s) {
      const vowels = "AEIOUaeiou";           //      String containing all vowel letters

      const vows = [];                       //      Collect vowels

      //      Collect vowels from the input string
      for (const ch of s) {
            if (vowels.includes(ch)) {
                  vows.push(ch);             //      Add vowel character to vows
            }
      }

      vows.sort();                           //      Sort vowels alphabetically

      let i = 0;                             //      Index for vowels in sorted order
      const t = [];                          //      Build output string

      //      Reconstruct string with sorted vowels
      for (const ch of s) {
            if (vowels.includes(ch)) {
                  t.push(vows[i]);           //      Substitute vowel with sorted one
                  i++;
            } else {
                  t.push(ch);                //      Keep consonant as is
            }
      }

      return t.join('');                     //      Return final string
};

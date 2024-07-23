//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1636

//? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

//? 🧺 Space complexity -> O(n) 👉🏻 using freq count HashMap 

var frequencySort = function (nums) {
      // count the freq of every num in nums
      const freqCount = new Map();
      for (const num of nums) {
            freqCount.set(num, (freqCount.get(num) || 0) + 1);
      }

      // sort based on the freq of num 
      // if freq is same then sort by dec order of num
      nums.sort((a, b) => {
            const freqA = freqCount.get(a);
            const freqB = freqCount.get(b);
            if (freqA === freqB) {
                  return b - a;
            }
            return freqA - freqB;
      });

      return nums;
};
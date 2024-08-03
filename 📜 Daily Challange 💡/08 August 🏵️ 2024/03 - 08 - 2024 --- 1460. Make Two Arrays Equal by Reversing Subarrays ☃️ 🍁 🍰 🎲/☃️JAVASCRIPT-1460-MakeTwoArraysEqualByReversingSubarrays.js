//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1460

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(target)

//? 🧺 Space complexity ➺ O(n) 👉🏻 making HashMap

var canBeEqual = function (target, arr) {
      // making hashmap
      let targetCount = new Map();
      let arrCount = new Map();

      // count the freq of both elem
      for (let i = 0; i < target.length; i++) {
            targetCount.set(target[i], (targetCount.get(target[i]) || 0) + 1);
            arrCount.set(arr[i], (arrCount.get(arr[i]) || 0) + 1);
      }

      // if length is not equal
      if (targetCount.size !== arrCount.size) {
            return false;
      }

      // check the freq of each elem
      for (let elem of target) {
            // check for both counter
            if (targetCount.get(elem) !== arrCount.get(elem)) {
                  return false;
            }
      }

      return true;
};

//-------------------------------------------------------

var canBeEqual = function (target, arr) {

      // function for counting freq
      const countOccurrences = (array) => {
            return array.reduce((hm, val) => {
                  hm[val] = (hm[val] || 0) + 1;
                  return hm;
            }, {});
      };

      // call for both array
      const targetCount = countOccurrences(target);
      const arrCount = countOccurrences(arr);

      // it will convert object to string and check for equality
      return JSON.stringify(targetCount) === JSON.stringify(arrCount);
};
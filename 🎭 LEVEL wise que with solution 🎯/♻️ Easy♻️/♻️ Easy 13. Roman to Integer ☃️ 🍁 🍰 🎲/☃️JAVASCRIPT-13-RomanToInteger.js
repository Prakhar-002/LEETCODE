//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 13

//? ⌚ Time complexity -> O(n) 👉 length of s

//? 🧺 Space complexity -> O(1) 

var romanToInt = function (s) {
      const romanValues = {
            "M": 1000,
            "D": 500,
            "C": 100,
            "L": 50,
            "X": 10,
            "V": 5,
            "I": 1
      };

      const array = s.split('').map(char => romanValues[char]);

      let sum = 0;
      for (let i = 0; i < array.length; i++) {
            if (i === array.length - 1) {
                  sum += array[i];
            } else if (array[i] >= array[i + 1]) {
                  sum += array[i];
            } else {
                  sum -= array[i];
            }
      }

      return sum;
};
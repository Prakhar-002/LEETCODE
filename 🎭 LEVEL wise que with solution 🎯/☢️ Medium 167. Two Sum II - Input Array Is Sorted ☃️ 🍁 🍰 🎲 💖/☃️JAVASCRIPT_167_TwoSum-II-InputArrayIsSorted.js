//! https://github.com/Prakhar-002/LEETCODE

var twoSum = function(numbers, target) {
      let first = 0
      let second = numbers.length - 1

      // While first <= second
      while (first <= second) { 
            // Calculating sum
            let sum = numbers[first] + numbers[second];
            // If it is equal to target break
            if (sum == target) {
                  break;
            // If sum is greater than target shift second pointer to left
            } else if (sum > target) {
                  second--;
            // If sum is smaller than target shift first pointer to right
            } else {
                  first++;
            }
      }

      // return array of both index + 1
      return [ first + 1, second + 1 ];


};
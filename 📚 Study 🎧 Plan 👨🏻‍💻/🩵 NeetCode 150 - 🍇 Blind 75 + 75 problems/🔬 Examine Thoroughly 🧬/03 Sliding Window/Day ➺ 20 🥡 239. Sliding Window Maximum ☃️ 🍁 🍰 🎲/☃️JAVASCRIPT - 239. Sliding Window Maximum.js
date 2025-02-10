//! https://github.com/Prakhar-002/LEETCODE

var maxSlidingWindow = function(nums, k) {
      let left = 0

      let maxWindow = []

      // A decDue that stores the index of nums
      let decDeq = [] 

      // Traverse the whole list
      for (let right = 0; right < nums.length; right++) {
            // Whenever we get a big value well pop smaller value from our queue
            while (decDeq.length > 0 && nums[decDeq[decDeq.length - 1]] < nums[right]) {
                  decDeq.pop();
            }

            // append the value if we get a small value cause we've to maintain the decreasing queue
            decDeq.push(right);

            // if our window get bigger than k
            // cause we are storing index so our left pointer will be out of bound from our window
            if (left > decDeq[0]) {
                  // so we'll pop from left
                  decDeq.shift();
            }

            // size should at least k so size will (right pointer + 1)
            if ((right + 1) >= k) {
                  // we'll store the value that is most left to our q in our array
                  maxWindow.push(nums[decDeq[0]]);
                  // once we take one window we'll update our window by left++
                  left++;
            }
      }

      return maxWindow;
};
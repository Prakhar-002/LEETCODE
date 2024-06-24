//! https://github.com/Prakhar-002/LEETCODE

var longestSubarray = function(nums, limit) {
      // Increasing deq which will max at first position of an subArray
      let incDeq = [];
      // Decreasing deq which will min at first position of an subArray
      let decDeq = [];
      let left = 0;
      let subArray = 0;
      for (let right = 0; right < nums.length; right++) {
            // cause we have to make this deq increasing so we'll remove if last elem is
            // greater than upcoming elem
            // cause this deq will store max at first position
            while (incDeq.length > 0 && incDeq[incDeq.length - 1] > nums[right]) {
                  incDeq.pop();
            }
            // cause we have to make this deq decreasing so we'll remove if last elem is
            // less than upcoming elem
            // cause this deq will store min at first position
            while (decDeq.length > 0 && decDeq[decDeq.length - 1] < nums[right]) {
                  decDeq.pop();
            }

            // simply add the coming elem in both deq in last of deq
            incDeq.push(nums[right]);
            decDeq.push(nums[right]);

            // If condition is not true then we'll shift out left pointers
            while (decDeq[0] - incDeq[0] > limit) {
                  // if we update our left pointer we have to remove left pointer elem from both
                  // deDue
                  // if left pointer value is present in decDeq remove it
                  if (decDeq[0] === nums[left]) {
                        decDeq.shift();
                  }
                  // if left pointer value is present in incDeq remove it
                  if (incDeq[0] === nums[left]) {
                        incDeq.shift();
                  }
                  // finally update our left pointer
                  left++;
            }
            // Take the max of subArray and (r - l + 1)
            subArray = Math.max(subArray, right - left + 1);
      }
      return subArray;
};
//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 349

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(n) 👉 using HashSet

var intersection = function(nums1, nums2) {
      // making hash set of first array
      let firstSet = new Set(nums1);

      let res = [];

      // traversing second array
      for (const n of nums2) {
            //if elem of 2nd array in the first array set
            if (firstSet.has(n)) {
                  // add to our res 
                  res.push(n)
                  // and delete the element from set cause we don't want repeat elem
                  firstSet.delete(n)
            }
      }

      return res;
};
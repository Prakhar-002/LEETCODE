//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 350

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(n) 👉 using HashMap

var intersect = function (nums1, nums2) {
      // creating map of first array for num : freq
      // make a map of num : freq
      const mp = new Map();
      for (const n of nums1) {
            mp.set(n, (mp.get(n) || 0) + 1);
      }

      const res = [];

      // traverse 2nd array
      for (const n of nums2) {
            // if n is contained in map
            if (mp.get(n) > 0) {
                  // add it to our array res
                  res.push(n);
                  // dec the freq of n from map
                  mp.set(n, mp.get(n) - 1);
            }
      }

      return res;
};
//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 46

//? ⌚ Time complexity -> O(n! * n^2) 👉 length of nums array

//? 🧺 Space complexity -> O(n! * n) 👉 length of nums array

var permute = function(nums) {
      if (nums.length == 0) {
            return [[]]
      }

      // call for n - 1 elem except 0th elem
      const perms = permute(nums.slice(1));
      res = []

      // for every sequence we get
      for(const perm of perms){
            // go to every position of sequence and insert nums[0]
            for(let i = 0; i <= perm.length; i++){
                  // make a copy of our perms cause we will not use our original perm
                  permCopy = [...perm];
                  // insert at every position our nums[0]
                  permCopy.splice(i, 0, nums[0]);
                  // append in our res
                  res.push(permCopy);
            }
      }

      return res;
};
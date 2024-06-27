//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1442  

var countTriplets = function(arr) {
      let triplets = 0

      for (let i = 0; i < arr.length - 1; i++) {
            let curXor = arr[i];
            for (let k = i + 1; k < arr.length; k++) {
                  curXor ^= arr[k];
                  if (curXor == 0) {
                        triplets += k - i;
                  }
            }
      }

      return triplets;
};   
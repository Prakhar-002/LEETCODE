//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1122 

var relativeSortArray = function(arr1, arr2) {
      const freqCount = new Array(1001).fill(0)

      for(const n of arr1){
            freqCount[n]++;
      }

      let res = []

      for (const n of arr2) {
            while(freqCount[n]-- > 0){
                  res.push(n);
            } 
      }

      for (let j = 0; j < freqCount.length; j++) {
            while(freqCount[j]-- > 0){
                  res.push(j);
            }
      }

      return res;
};